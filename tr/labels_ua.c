#include "labels.h"

const char *const labels_ua [LABEL_END] = {
    [LABEL_SUNDAY]          = "НЕДІЛЯ",
    [LABEL_MONDAY]          = "ПОНЕДІЛОК",
    [LABEL_TUESDAY]         = "ВІВТОРОК",
    [LABEL_WEDNESDAY]       = "СЕРЕДА",
    [LABEL_THURSDAY]        = "ЧЕТВЕР",
    [LABEL_FRIDAY]          = "П'ЯТНИЦЯ",
    [LABEL_SATURDAY]        = "СУБОТА",

    [LABEL_VOLUME]          = "Гучність",
    [LABEL_BASS]            = "Тембр НЧ",
    [LABEL_MIDDLE]          = "Тембр СЧ",
    [LABEL_TREBLE]          = "Тембр ВЧ",
    [LABEL_FRONTREAR]       = "Фронт / тил",
    [LABEL_BALANCE]         = "Баланс",
    [LABEL_CENTER]          = "Центр",
    [LABEL_SUBWOOFER]       = "Сабвуфер",
    [LABEL_PREAMP]          = "Підсилення",

    [LABEL_IN_TUNER]        = "Тюнер",
    [LABEL_IN_PC]           = "Комп'ютер",
    [LABEL_IN_TV]           = "Телевізор",
// [LABEL_IN_BLUETOOTH]       = "Bluetooth",
// [LABEL_IN_DVD]             = "DVD",
// [LABEL_IN_USB]             = "USB",
    [LABEL_IN_MICROPHONE]   = "Мікрофон",
    [LABEL_IN_GUITAR]       = "Гітара",
    [LABEL_IN_TURNTABLES]   = "Вертушки",
    [LABEL_IN_CASSETTE]     = "Касета",
    [LABEL_IN_PROJECTOR]    = "Проектор",
    [LABEL_IN_SATELLITE]    = "Супутник",
    [LABEL_IN_MIXER]        = "Мікшер",
//    [LABEL_IN_KARADIO]      = "KaRadio",

    [LABEL_BOOL_OFF]        = "ВИМКН",
    [LABEL_BOOL_ON]         = "ВКЛ",

    [LABEL_TUNER_FM_STATION_NAME]   = "Ім'я FM станції",

    [LABEL_TUNER_IC + TUNER_IC_NO] = "Немає",

//    [LABEL_TUNER_BAND + TUNER_BAND_FM_US_EUROPE]    = "US/Europe FM",
//    [LABEL_TUNER_BAND + TUNER_BAND_FM_JAPAN]        = "Japan FM",
//    [LABEL_TUNER_BAND + TUNER_BAND_FM_WORLDWIDE]    = "Worldwide FM",
//    [LABEL_TUNER_BAND + TUNER_BAND_FM_EASTEUROPE]   = "East Europe FM",

    [LABEL_TUNER_STEP + TUNER_STEP_50K]     = "50кГц",
    [LABEL_TUNER_STEP + TUNER_STEP_100K]    = "100кГц",
    [LABEL_TUNER_STEP + TUNER_STEP_200K]    = "200кГц",

    [LABEL_TUNER_DEEMPH + TUNER_DEEMPH_50u] = "50мкс",
    [LABEL_TUNER_DEEMPH + TUNER_DEEMPH_75u] = "75мкс",

    [LABEL_TUNER_MODE + TUNER_MODE_GRID]        = "Сітка",
    [LABEL_TUNER_MODE + TUNER_MODE_STATIONS]    = "Станції",
    [LABEL_TUNER_MODE + TUNER_MODE_SCAN]        = "Пошук",

    [LABEL_SPECTRUM_MODE + SP_MODE_STEREO]      = "Стерео",
    [LABEL_SPECTRUM_MODE + SP_MODE_MIXED]       = "Суміщення",
    [LABEL_SPECTRUM_MODE + SP_MODE_WATERFALL]   = "Водоспад",

    [LABEL_PAL_MODE + PAL_SNOW]         = "Сніг",
    [LABEL_PAL_MODE + PAL_AQUA]         = "Вода",
    [LABEL_PAL_MODE + PAL_FIRE]         = "Вогонь",

    [LABEL_AUDIO_IC + AUDIO_IC_NO]      = "Немає",

    [LABEL_ALARM_DAY + ALARM_DAY_OFF]       = "Вимкн",
    [LABEL_ALARM_DAY + ALARM_DAY_WEEKDAYS]  = "Будні",
    [LABEL_ALARM_DAY + ALARM_DAY_ALL_DAYS]  = "Усі дні",

    [LABEL_MUTESTBY + MUTESTBY_POS] = "Актив. 1",
    [LABEL_MUTESTBY + MUTESTBY_NEG] = "Актив. 0",

    // NOTE: Keep in sync with MenuIdx in menu.h
    [LABEL_MENU + MENU_NULL]            = "Назад",

    [LABEL_MENU + MENU_SETUP]           = "Налаштування",

    [LABEL_MENU + MENU_SETUP_SYSTEM]    = "Система",
    [LABEL_MENU + MENU_SETUP_AUDIO]     = "Аудіо",
    [LABEL_MENU + MENU_SETUP_TUNER]     = "Тюнер",
    [LABEL_MENU + MENU_SETUP_SPECTRUM]  = "Спектр",
    [LABEL_MENU + MENU_SETUP_DISPLAY]   = "Дисплей",
    [LABEL_MENU + MENU_SETUP_ALARM]     = "Будильник",
    [LABEL_MENU + MENU_SETUP_RC]        = "Пульт",

    [LABEL_MENU + MENU_SYSTEM_LANG]     = "Мова",
    [LABEL_MENU + MENU_SYSTEM_MUTESTBY] = "Mute і Stby",
//    [LABEL_MENU + MENU_SYSTEM_I2C_EXT]  = "I2C expander",
    [LABEL_MENU + MENU_SYSTEM_ENC_RES]  = "Крок енкодера",
    [LABEL_MENU + MENU_SYSTEM_SIL_TIM]  = "Таймер тиші",
    [LABEL_MENU + MENU_SYSTEM_RTC_CORR] = "Корекція часу",

//    [LABEL_MENU + MENU_I2C_EXT_IN_STAT] = "Input status",

    [LABEL_MENU + MENU_AUDIO_IC]        = "Аудіопроцесор",
    [LABEL_MENU + MENU_AUDIO_IN]        = "Вхід",

    [LABEL_MENU + MENU_TUNER_IC]        = "Чіп тюнера",
    [LABEL_MENU + MENU_TUNER_BAND]      = "Діапазон",
    [LABEL_MENU + MENU_TUNER_STEP]      = "Крок",
    [LABEL_MENU + MENU_TUNER_DEEMPH]    = "Предвикривлення",
    [LABEL_MENU + MENU_TUNER_MODE]      = "Режим налаштування",
    [LABEL_MENU + MENU_TUNER_FMONO]     = "Форсувати моно",
    [LABEL_MENU + MENU_TUNER_RDS]       = "Увімкнути RDS",
    [LABEL_MENU + MENU_TUNER_BASS]      = "Посилити НЧ",
    [LABEL_MENU + MENU_TUNER_VOLUME]    = "Гучність",

    [LABEL_MENU + MENU_ALARM_HOUR]      = "Година",
    [LABEL_MENU + MENU_ALARM_MINUTE]    = "Хвилина",
    [LABEL_MENU + MENU_ALARM_DAYS]      = "Дні",

    [LABEL_MENU + MENU_SPECTURM_MODE]   = "Режим екрана",
//    [LABEL_MENU + MENU_SPECTURM_PEAKS]  = "Peak level",

    [LABEL_MENU + MENU_DISPLAY_BR_STBY] = "Яскравість STBY",
    [LABEL_MENU + MENU_DISPLAY_BR_WORK] = "Яскравість",
    [LABEL_MENU + MENU_DISPLAY_ROTATE]  = "Розгорнути",
//    [LABEL_MENU + MENU_DISPLAY_DEF]     = "Main screen",
    [LABEL_MENU + MENU_DISPLAY_PALETTE] = "Палітра",

    // NOTE: Keep in sync with cmd.h define list
//    [LABEL_MENU + MENU_RC_STBY_SWITCH]  = "Switch standby",
//    [LABEL_MENU + MENU_RC_MUTE]         = "Mute",
//    [LABEL_MENU + MENU_RC_VOL_UP]       = "Volume up",
//    [LABEL_MENU + MENU_RC_VOL_DOWN]     = "Volume down",
//    [LABEL_MENU + MENU_RC_MENU]         = "Menu",
//    [LABEL_MENU + MENU_RC_CHAN_NEXT]    = "Next chan",
//    [LABEL_MENU + MENU_RC_CHAN_PREV]    = "Prev chan",
//    [LABEL_MENU + MENU_RC_DIG]          = "Digit",
//    [LABEL_MENU + MENU_RC_IN_NEXT]      = "Next input",
//    [LABEL_MENU + MENU_RC_NAV_OK]       = "OK",
//    [LABEL_MENU + MENU_RC_NAV_BACK]     = "Back",
//    [LABEL_MENU + MENU_RC_NAV_RIGHT]    = "Right",
//    [LABEL_MENU + MENU_RC_NAV_UP]       = "Up",
//    [LABEL_MENU + MENU_RC_NAV_LEFT]     = "Left",
//    [LABEL_MENU + MENU_RC_NAV_DOWN]     = "Down",
//    [LABEL_MENU + MENU_RC_BASS_UP]      = "Bass up",
//    [LABEL_MENU + MENU_RC_BASS_DOWN]    = "Bass down",
//    [LABEL_MENU + MENU_RC_MIDDLE_UP]    = "Middle up",
//    [LABEL_MENU + MENU_RC_MIDDLE_DOWN]  = "Middle down",
//    [LABEL_MENU + MENU_RC_TREBLE_UP]    = "Treble up",
//    [LABEL_MENU + MENU_RC_TREBLE_DOWN]  = "Treble down",
//    [LABEL_MENU + MENU_RC_LOUDNESS]     = "Loudness",
//    [LABEL_MENU + MENU_RC_SURROUND]     = "Surround",
//    [LABEL_MENU + MENU_RC_EFFECT_3D]    = "3D-effect",
//    [LABEL_MENU + MENU_RC_TONE_BYPASS]  = "Bypass tone",
//    [LABEL_MENU + MENU_RC_TIME]         = "Time",
//    [LABEL_MENU + MENU_RC_STOP]         = "Stop",
//    [LABEL_MENU + MENU_RC_PLAY]         = "Play",
//    [LABEL_MENU + MENU_RC_PLAY_PAUSE]   = "Play/pause",
//    [LABEL_MENU + MENU_RC_FWD]          = "Flash forward",
//    [LABEL_MENU + MENU_RC_TIMER]        = "Timer",
    [LABEL_MENU + MENU_RC_SP_MODE]      = "Режим спектра",
//    [LABEL_MENU + MENU_RC_SCR_DEF]      = "Default screen",
};
