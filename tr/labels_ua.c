#include "labels.h"

const char *const labels_ua [LABEL_END] = {
    [LABEL_SUNDAY]          = "НЕДІЛЯ",
    [LABEL_MONDAY]          = "ПОНЕДІЛОК",
    [LABEL_TUESDAY]         = "ВІВТОРОК",
    [LABEL_WEDNESDAY]       = "СЕРЕДА",
    [LABEL_THURSDAY]        = "ЧЕТВЕР",
    [LABEL_FRIDAY]          = "П'ЯТНИЦЯ",
    [LABEL_SATURDAY]        = "СУБОТА",

    [LABEL_BRIGNTNESS]      = "Яскравість",
    [LABEL_MENU + MENU_SETUP_MUTESTBY]  = "Вивiд Mute і Stby",

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

    [LABEL_BOOL_OFF]        = "ВИМКН",
    [LABEL_BOOL_ON]         = "ВКЛ",

    [LABEL_TUNER_IC + TUNER_IC_NO] = "Немає",
//    [LABEL_TUNER_IC + TUNER_IC_RDA5807] = "RDA5807",
//    [LABEL_TUNER_IC + TUNER_IC_SI4703]  = "Si4703",
//    [LABEL_TUNER_IC + TUNER_IC_TEA5767] = "TEA5767",
//    [LABEL_TUNER_IC + TUNER_IC_TEST]    = "TEST",

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

    [LABEL_AUDIO_IC + AUDIO_IC_NO]      = "Немає",

    [LABEL_MENU + MENU_NULL]            = "Назад",

    [LABEL_MENU + MENU_SETUP]           = "Налаштування",
    [LABEL_MENU + MENU_SETUP_LANG]      = "Мова",
    [LABEL_MENU + MENU_SETUP_AUDIO]     = "Аудіо",
    [LABEL_MENU + MENU_SETUP_TUNER]     = "Тюнер",
    [LABEL_MENU + MENU_SETUP_SPECTRUM]  = "Спектр",
    [LABEL_MENU + MENU_SETUP_DISPLAY]   = "Дисплей",
    [LABEL_MENU + MENU_SETUP_INPUT]     = "Введення",
    [LABEL_MENU + MENU_SETUP_RC]        = "Пульт",

    [LABEL_MENU + MENU_AUDIO_IC]        = "Аудіопроцесор",

    [LABEL_MENU + MENU_AUDIO_IN_0]      = "Вхід 0",
    [LABEL_MENU + MENU_AUDIO_IN_1]      = "Вхід 1",
    [LABEL_MENU + MENU_AUDIO_IN_2]      = "Вхід 2",
    [LABEL_MENU + MENU_AUDIO_IN_3]      = "Вхід 3",
    [LABEL_MENU + MENU_AUDIO_IN_4]      = "Вхід 4",
    [LABEL_MENU + MENU_AUDIO_IN_5]      = "Вхід 5",
    [LABEL_MENU + MENU_AUDIO_IN_6]      = "Вхід 6",
    [LABEL_MENU + MENU_AUDIO_IN_7]      = "Вхід 7",

    [LABEL_MENU + MENU_TUNER_IC]        = "Чіп тюнера",
    [LABEL_MENU + MENU_TUNER_BAND]      = "Діапазон",
    [LABEL_MENU + MENU_TUNER_STEP]      = "Крок",
    [LABEL_MENU + MENU_TUNER_DEEMPH]    = "Предвикривлення",
    [LABEL_MENU + MENU_TUNER_MODE]      = "Режим налаштування",
    [LABEL_MENU + MENU_TUNER_FMONO]     = "Форсувати моно",
    [LABEL_MENU + MENU_TUNER_RDS]       = "Увімкнути RDS",
    [LABEL_MENU + MENU_TUNER_BASS]      = "Посилити НЧ",
    [LABEL_MENU + MENU_TUNER_VOLUME]    = "Гучність",

    [LABEL_MENU + MENU_SPECTURM_MODE]   = "Режим екрана",

    [LABEL_MENU + MENU_DISPLAY_BR_STBY] = "Яскравість STBY",
    [LABEL_MENU + MENU_DISPLAY_ROTATE]  = "Розгорнути",

    [LABEL_MENU + MENU_INPUT_ENC_RES]   = "Крок енкодера",
};
