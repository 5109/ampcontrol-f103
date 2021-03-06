#include "pins.h"

#include "hwlibs.h"

#include "i2c.h"
#include "settings.h"

static void pinsInitButtons(void)
{
    LL_GPIO_InitTypeDef GPIO_InitStructf;

    GPIO_InitStructf.Mode = LL_GPIO_MODE_INPUT;
    GPIO_InitStructf.Pull = LL_GPIO_PULL_UP;

    GPIO_InitStructf.Pin = DISP_DATA_Pin;
    LL_GPIO_Init(DISP_DATA_Port, &GPIO_InitStructf);
}

static void pinsInitRc(void)
{
#ifdef _STM32F1
    LL_GPIO_AF_SetEXTISource(RC_AR_ExtiPort, RC_AR_ExtiLine);
    LL_GPIO_SetPinMode(RC_Port, RC_Pin, LL_GPIO_MODE_FLOATING);
#endif

    LL_EXTI_DisableEvent_0_31(RC_ExtiLine);
    LL_EXTI_EnableIT_0_31(RC_ExtiLine);
    LL_EXTI_EnableRisingTrig_0_31(RC_ExtiLine);
    LL_EXTI_EnableFallingTrig_0_31(RC_ExtiLine);
}

static void pinsInitDisplay(void)
{
    LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

    GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
#ifdef _STM32F3
    GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
#endif

    GPIO_InitStruct.Pin = DISP_CS_Pin;
    LL_GPIO_Init(DISP_CS_Port, &GPIO_InitStruct);
    GPIO_InitStruct.Pin = DISP_BCKL_Pin;
    LL_GPIO_Init(DISP_BCKL_Port, &GPIO_InitStruct);
    GPIO_InitStruct.Pin = DISP_RS_Pin;
    LL_GPIO_Init(DISP_RS_Port, &GPIO_InitStruct);
#ifndef _DISP_SPI
    GPIO_InitStruct.Pin = DISP_WR_Pin;
    LL_GPIO_Init(DISP_WR_Port, &GPIO_InitStruct);
#endif
}

void pinsInitMuteStby(void)
{
    LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

    GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
#ifdef _STM32F3
    GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
#endif

    GPIO_InitStruct.Pin = MUTE_Pin;
    LL_GPIO_Init(MUTE_Port, &GPIO_InitStruct);
    GPIO_InitStruct.Pin = STBY_Pin;
    LL_GPIO_Init(STBY_Port, &GPIO_InitStruct);
}

void pinsInitHwReset()
{
    LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

    GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
#ifdef _STM32F3
    GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
#endif

    GPIO_InitStruct.Pin = SI470X_RST_Pin;
    LL_GPIO_Init(SI470X_RST_Port, &GPIO_InitStruct);
}

void pinsHwResetI2c(void)
{
    LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

    GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
#ifdef _STM32F3
    GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
#endif

    GPIO_InitStruct.Pin = SI470X_SCLK_Pin | SI470X_SDIO_Pin;
    LL_GPIO_Init(SI470X_SDIO_Port, &GPIO_InitStruct);

    CLR(SI470X_RST);    // Start display and Si470x reset

    CLR(SI470X_SCLK);   // Put to zero in this sequence to avoid fake START

    LL_mDelay(1);       // Select 2-wire interface:
    CLR(SI470X_SDIO);   // SDIO = 0
    IN_P(SI470X_SCLK);  // SCLK = 1

    LL_mDelay(5);       // Reset

    SET(SI470X_RST);    // End of reset

    LL_mDelay(1);
#ifdef _STM32F1
    IN_F(SI470X_SDIO);  // SDIO = 1
#endif
}

void pinsInit(void)
{
    // Enable clock for all GPIO peripherials
#ifdef _STM32F1
    LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOA);
    LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOB);
    LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOC);
#endif
#ifdef _STM32F3
    LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA);
    LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOB);
    LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOC);
#endif

    pinsInitButtons();
    pinsInitRc();
    pinsInitDisplay();

#ifdef _STM32F1
    // JTAG-DP Disabled and SW-DP Enabled
    LL_GPIO_AF_Remap_SWJ_NOJTAG();
#endif

    pinsInitMuteStby();

    pinsInitHwReset();
}

void pinsSetMute(bool value)
{
    MuteStby muteStby = (MuteStby)settingsGet(PARAM_SYSTEM_MUTESTBY);

    if (muteStby == MUTESTBY_POS) {
        if (value) {
            CLR(MUTE);
        } else {
            SET(MUTE);
        }
    } else if (muteStby == MUTESTBY_NEG) {
        if (value) {
            SET(MUTE);
        } else {
            CLR(MUTE);
        }
    }
}

void pinsSetStby(bool value)
{
    MuteStby muteStby = (MuteStby)settingsGet(PARAM_SYSTEM_MUTESTBY);

    // TODO: Remove MUTESTBY_SWD condition when debug finished
    if (muteStby == MUTESTBY_POS) {
        if (value) {
            CLR(STBY);
        } else {
            SET(STBY);
        }
    } else if (muteStby == MUTESTBY_NEG) {
        if (value) {
            SET(STBY);
        } else {
            CLR(STBY);
        }
    }
}

void pinsSetBckl(bool value)
{
    if (value) {
        SET(DISP_BCKL);
    } else {
        CLR(DISP_BCKL);
    }
}
