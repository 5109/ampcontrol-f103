#ifndef SCREEN_H
#define SCREEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#include "gui/icons.h"

typedef uint8_t ScreenMode;
enum {
    // Screens allowed to be default
    SCREEN_SPECTRUM = 0,
    SCREEN_TIME,
    SCREEN_AUDIO_INPUT,

    SCREEN_STANDBY,

    SCREEN_AUDIO_PARAM,
    SCREEN_AUDIO_FLAG,

    SCREEN_MENU,

    SCREEN_TEXTEDIT,

    SCREEN_STBY_TIMER,
    SCREEN_SILENCE_TIMER,

    SCREEN_END
};

typedef struct {
    ScreenMode mode;
    ScreenMode def;
    Icon iconHint;
    int8_t brightness;
} Screen;

void screenReadSettings(void);
void screenSaveSettings(void);

void screenInit(void);

Screen *screenGet(void);

void screenSetMode(ScreenMode value);
ScreenMode screenGetMode(void);

void screenSetBrightness(int8_t value);

void screenToClear(void);
void screenShow(bool clear);

void screenPwm(void);

#ifdef __cplusplus
}
#endif

#endif // SCREEN_H
