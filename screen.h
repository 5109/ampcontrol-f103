#ifndef SCREEN_H
#define SCREEN_H

#include <inttypes.h>

#include "audio/audio.h"
#include "rtc.h"

typedef enum {
    INPUT_TUNER = 0,

    INPUT_END
} Input;

typedef enum {
    SCREEN_STANDBY,

    SCREEN_TIME,
    SCREEN_SPECTRUM,
    SCREEN_BRIGHTNESS,
    SCREEN_AUDIO_INPUT,
    SCREEN_AUDIO_PARAM,

    SCREEN_TUNER,

    SCREEN_TEST,

    SCREEN_END
} Screen;

typedef union {
    AudioParam audio;
    uint8_t input;
    RtcMode rtc;
} ScreenParam;

void screenReadSettings(void);
void screenSaveSettings(void);

void screenInit(void);
void screenClear(void);
void screenUpdate(void);

void screenSet(Screen value);
Screen screenGet(void);

void screenSetParam(ScreenParam param);

void screenSetDefault(Screen value);
Screen screenGetDefault(void);

int8_t screenGetBrightness(uint8_t mode);
void screenSetBrightness(uint8_t mode, int8_t value);
void screenChangeBrighness(uint8_t mode, int8_t diff);

void screenShow(void);
void screenShowTime(void);
void screenShowSpectrum(void);
void screenShowBrightness(void);
void screenShowInput(void);
void screenShowAudioParam(void);
void screenShowTuner(void);

void screenTest(void);

#endif // SCREEN_H
