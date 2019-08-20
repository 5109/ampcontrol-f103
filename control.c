#include "control.h"

#include <stm32f1xx_ll_usart.h>
#include <stdbool.h>
#include <string.h>

#include "audio/audio.h"
#include "debug.h"
#include "ringbuf.h"
#include "usart.h"
#include "utils.h"

#define CMDBUF_SIZE     64

static RingBuf cmdRb;
static char cmdRbData[CMDBUF_SIZE];
static LineParse cmdLp;

static const char *CTRL_AMP     = "amp";

static const char *CTRL_STATUS  = ".status";
static const char *CTRL_INPUT   = ".input";

static const char *CTRL_ON      = ".on";
static const char *CTRL_OFF     = ".off";
static const char *CTRL_TOGGLE  = ".togggle";

static bool isEndOfLine(const char *line)
{
    if (*line == '\0') {
        return true;
    } else if (*line == '\r' || *line == '\n') {
        return true;
    }
    return false;
}

static void controlParseAmpStby(char *line)
{
    if (isEndOfLine(line)) {
        controlReportAmpStatus();
    }
}

static void controlParseAmpInput(char *line)
{
    if (isEndOfLine(line)) {
        controlReportInput();
    }
}

static void controlParseAmp(char *line)
{
    if (isEndOfLine(line)) {
        //
    } else if (strstr(line, CTRL_ON) == line) {
        actionQueue(ACTION_STANDBY, FLAG_EXIT);
    } else if (strstr(line, CTRL_OFF) == line) {
        actionQueue(ACTION_STANDBY, FLAG_ENTER);
    } else if (strstr(line, CTRL_TOGGLE) == line) {
        actionQueue(ACTION_STANDBY, FLAG_SWITCH);
    } else if (strstr(line, CTRL_STATUS) == line) {
        controlParseAmpStby(line + strlen(CTRL_STATUS));
    } else if (strstr(line, CTRL_INPUT) == line) {
        controlParseAmpInput(line + strlen(CTRL_INPUT));
    }
}

static void controlParseLine(char *line)
{
    if (strstr(line, CTRL_AMP) == line) {
        controlParseAmp(line + strlen(CTRL_AMP));
    }
}

void controlInit(void)
{
    ringBufInit(&cmdRb, cmdRbData, sizeof(cmdRbData));
}

void controlIRQ(void)
{
    char data = LL_USART_ReceiveData8(USART_DBG);

#ifdef _DEBUG_KARADIO
    usartSendChar(USART_KARADIO, data);
#endif

    ringBufPushChar(&cmdRb, data);
}

void controlGetData(void)
{
    uint16_t size = ringBufGetSize(&cmdRb);

    for (uint16_t i = 0; i < size; i++) {
        char ch = ringBufPopChar(&cmdRb);
        if (utilReadChar(&cmdLp, ch)) {
            controlParseLine(cmdLp.line);
        }
    }
}

void controlReportAmpStatus(void)
{
    AmpStatus ampStatus = actionGetAmpStatus();

    char *status = "UNKNOWN";

    switch (ampStatus) {
    case AMP_STATUS_STBY:
        status = "STANDBY";
        break;
    case AMP_STATUS_INIT:
        status = "INIT";
        break;
    case AMP_STATUS_ACTIVE:
        status = "ACTIVE";
        break;
    }

    dbg(utilMkStr("##AMP.STATUS#: %s", status));
}

void controlReportInput(void)
{
    AudioProc *aProc = audioGet();

    dbg(utilMkStr("##AMP.INPUT#: %d", aProc->par.input));
}
