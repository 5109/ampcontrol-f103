#ifndef ACTIONS_H
#define ACTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#include "screen.h"

#define FLAG_OFF        0
#define FLAG_ON         1
#define FLAG_SWITCH     2

#define ACTION_HIDDEN   false
#define ACTION_VISIBLE  true

#define DIRECTION_UP    1
#define DIRECTION_DOWN  -1

typedef uint8_t ActionType;
enum {
    ACTION_NONE = 0,

    ACTION_BTN_SHORT,
    ACTION_BTN_LONG,
    ACTION_ENCODER,
    ACTION_REMOTE,

    ACTION_STANDBY,
    ACTION_INIT_HW,

    ACTION_DISP_EXPIRED,

    ACTION_DIGIT,

    ACTION_PREV,
    ACTION_NEXT,

    ACTION_AUDIO_MENU,

    ACTION_NAVIGATE,

    ACTION_RTC_MODE,
    ACTION_RTC_CHANGE,
    ACTION_RTC_SET_HOUR,
    ACTION_RTC_SET_MIN,
    ACTION_RTC_SET_SEC,
    ACTION_RTC_SET_DATE,
    ACTION_RTC_SET_MONTH,
    ACTION_RTC_SET_YEAR,

    ACTION_AUDIO_INPUT,
    ACTION_AUDIO_PARAM_CHANGE,

    ACTION_AUDIO_MUTE,
    ACTION_AUDIO_LOUDNESS,
    ACTION_AUDIO_SURROUND,
    ACTION_AUDIO_EFFECT3D,
    ACTION_AUDIO_BYPASS,

    ACTION_TUNER_PREV,
    ACTION_TUNER_NEXT,

    ACTION_BR_STBY,
    ACTION_BR_WORK,

    ACTION_MENU_SELECT,
    ACTION_MENU_CHANGE,

    ACTION_TYPE_END
};

typedef struct {
    ActionType type;
    bool visible;
    int16_t value;

    Screen screen;
    ScreenParam param;
    int16_t timeout;
} Action;

void actionUserGet(void);
void actionHandle(bool visible);

#ifdef __cplusplus
}
#endif

#endif // ACTIONS_H
