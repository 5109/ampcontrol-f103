#include "labels.h"

const char *const labels_ro[LABEL_END] = {
    [LABEL_SUNDAY]          = "Duminica",
    [LABEL_MONDAY]          = "Luni",
    [LABEL_TUESDAY]         = "Marti",
    [LABEL_WEDNESDAY]       = "Miercuri",
    [LABEL_THURSDAY]        = "Joi",
    [LABEL_FRIDAY]          = "Vineri",
    [LABEL_SATURDAY]        = "Sambata",

    [LABEL_VOLUME]          = "Volum",
//    [LABEL_BASS]            = "Bass",
//    [LABEL_MIDDLE]          = "Middle",
//    [LABEL_TREBLE]          = "Treble",
//    [LABEL_FRONTREAR]       = "Front/rear",
//    [LABEL_BALANCE]         = "Balance",
    [LABEL_CENTER]          = "Centru",
//    [LABEL_SUBWOOFER]       = "Subwoofer",
//    [LABEL_PREAMP]          = "Preamp",

    [LABEL_IN_TUNER]        = "Radio",
    [LABEL_IN_PC]           = "Calculator",
    [LABEL_IN_TV]           = "TV",
//    [LABEL_IN_BLUETOOTH]    = "Bluetooth",
//    [LABEL_IN_DVD]          = "DVD",
//    [LABEL_IN_USB]          = "USB",
    [LABEL_IN_MICROPHONE]   = "Microfon",
    [LABEL_IN_GUITAR]       = "Chitara",
    [LABEL_IN_TURNTABLES]   = "Platane",
    [LABEL_IN_CASSETTE]     = "Caseta",
    [LABEL_IN_PROJECTOR]    = "Proiector",
    [LABEL_IN_SATELLITE]    = "Satelit",
//    [LABEL_IN_MIXER]        = "Mixer",
    //    [LABEL_IN_KARADIO]      = "KaRadio",

    [LABEL_BOOL_OFF]        = "NU",
    [LABEL_BOOL_ON]         = "DA",

    [LABEL_TUNER_FM_STATION_NAME]   = "Nume post FM",

    [LABEL_TUNER_IC + TUNER_IC_NO]      = "Fara",

    [LABEL_TUNER_BAND + TUNER_BAND_FM_US_EUROPE]    = "SUA/Europa FM",
    [LABEL_TUNER_BAND + TUNER_BAND_FM_JAPAN]        = "Japonia FM",
    [LABEL_TUNER_BAND + TUNER_BAND_FM_WORLDWIDE]    = "Global FM",
    [LABEL_TUNER_BAND + TUNER_BAND_FM_EASTEUROPE]   = "Europa de Est FM",

//    [LABEL_TUNER_STEP + TUNER_STEP_50K]     = "50kHz",
//    [LABEL_TUNER_STEP + TUNER_STEP_100K]    = "100kHz",
//    [LABEL_TUNER_STEP + TUNER_STEP_200K]    = "200kHz",

//    [LABEL_TUNER_DEEMPH + TUNER_DEEMPH_50u] = "50us",
//    [LABEL_TUNER_DEEMPH + TUNER_DEEMPH_75u] = "75us",

    [LABEL_TUNER_MODE + TUNER_MODE_GRID]        = "Grila",
    [LABEL_TUNER_MODE + TUNER_MODE_STATIONS]    = "Posturi",
    [LABEL_TUNER_MODE + TUNER_MODE_SCAN]        = "Scanare",

//    [LABEL_SPECTRUM_MODE + SP_MODE_STEREO]      = "Stereo",
//    [LABEL_SPECTRUM_MODE + SP_MODE_MIXED]       = "Mixed",
//    [LABEL_SPECTRUM_MODE + SP_MODE_WATERFALL]   = "Waterfall",

//    [LABEL_PAL_MODE + PAL_SNOW]         = "Snow",
//    [LABEL_PAL_MODE + PAL_AQUA]         = "Aqua",
//    [LABEL_PAL_MODE + PAL_FIRE]         = "Fire",

    [LABEL_AUDIO_IC + AUDIO_IC_NO]      = "Fara",

    [LABEL_ALARM_DAY + ALARM_DAY_OFF]       = "Oprit",
    [LABEL_ALARM_DAY + ALARM_DAY_WEEKDAYS]  = "Weekend",
    [LABEL_ALARM_DAY + ALARM_DAY_ALL_DAYS]  = "7/7",

    [LABEL_MUTESTBY + MUTESTBY_POS] = "Activ 1",
    [LABEL_MUTESTBY + MUTESTBY_NEG] = "Activ 0",

    // NOTE: Keep in sync with MenuIdx in menu.h
    [LABEL_MENU + MENU_NULL]            = "Inapoi",

    [LABEL_MENU + MENU_SETUP]           = "Setari",

    [LABEL_MENU + MENU_SETUP_SYSTEM]    = "Sistem",
//    [LABEL_MENU + MENU_SETUP_AUDIO]     = "Audio",
    [LABEL_MENU + MENU_SETUP_TUNER]     = "Radio",
    [LABEL_MENU + MENU_SETUP_SPECTRUM]  = "Spectrograma",
    [LABEL_MENU + MENU_SETUP_DISPLAY]   = "Afisaj",
    [LABEL_MENU + MENU_SETUP_ALARM]     = "Alarma",
    [LABEL_MENU + MENU_SETUP_RC]        = "Telecomanda",

    [LABEL_MENU + MENU_SYSTEM_LANG]     = "Limba",
    [LABEL_MENU + MENU_SYSTEM_MUTESTBY] = "Mut & Stby",
//    [LABEL_MENU + MENU_SYSTEM_I2C_EXT]  = "I2C expander",
    [LABEL_MENU + MENU_SYSTEM_ENC_RES]  = "Rezolutie encoder",
//    [LABEL_MENU + MENU_SYSTEM_SIL_TIM]  = "Silence timer",
    [LABEL_MENU + MENU_SYSTEM_RTC_CORR] = "Corectie timp",

//    [LABEL_MENU + MENU_I2C_EXT_IN_STAT] = "Input status",

    [LABEL_MENU + MENU_AUDIO_IC]        = "Procesor sunet",
    [LABEL_MENU + MENU_AUDIO_IN]        = "Intrare",

    [LABEL_MENU + MENU_TUNER_IC]        = "Procesor radio",
    [LABEL_MENU + MENU_TUNER_BAND]      = "Frecventa",
    [LABEL_MENU + MENU_TUNER_STEP]      = "Pas scanare",
//    [LABEL_MENU + MENU_TUNER_DEEMPH]    = "Deemphasys",
    [LABEL_MENU + MENU_TUNER_MODE]      = "Mod control",
    [LABEL_MENU + MENU_TUNER_FMONO]     = "Forteaza mono",
    [LABEL_MENU + MENU_TUNER_RDS]       = "Activare RDS",
//    [LABEL_MENU + MENU_TUNER_BASS]      = "Bass boost",
    [LABEL_MENU + MENU_TUNER_VOLUME]    = "Volum",

    [LABEL_MENU + MENU_ALARM_HOUR]      = "Ora",
    [LABEL_MENU + MENU_ALARM_MINUTE]    = "Minut",
    [LABEL_MENU + MENU_ALARM_DAYS]      = "Zile",

    [LABEL_MENU + MENU_SPECTURM_MODE]   = "Afisare",
    [LABEL_MENU + MENU_SPECTRUM_PEAKS]  = "Nivel maxim",

    [LABEL_MENU + MENU_DISPLAY_BR_STBY] = "Luminozitate STBY",
    [LABEL_MENU + MENU_DISPLAY_BR_WORK] = "Luminozitate",
    [LABEL_MENU + MENU_DISPLAY_ROTATE]  = "Rotire",
//    [LABEL_MENU + MENU_DISPLAY_DEF]     = "Main screen",
//    [LABEL_MENU + MENU_DISPLAY_PALETTE] = "Palette",

    // NOTE: Keep in sync with cmd.h define list
    [LABEL_MENU + MENU_RC_STBY_SWITCH]  = "Comutare standby",
    [LABEL_MENU + MENU_RC_MUTE]         = "Mut",
    [LABEL_MENU + MENU_RC_VOL_UP]       = "Volum +",
    [LABEL_MENU + MENU_RC_VOL_DOWN]     = "Volum -",
    [LABEL_MENU + MENU_RC_MENU]         = "Meniu",
    [LABEL_MENU + MENU_RC_CHAN_NEXT]    = "Canal +",
    [LABEL_MENU + MENU_RC_CHAN_PREV]    = "Canal -",
    [LABEL_MENU + MENU_RC_DIG]          = "Cifra",
    [LABEL_MENU + MENU_RC_IN_NEXT]      = "Intrare +",
    [LABEL_MENU + MENU_RC_NAV_OK]       = "OK",
    [LABEL_MENU + MENU_RC_NAV_BACK]     = "Inapoi",
    [LABEL_MENU + MENU_RC_NAV_RIGHT]    = "Dreapta",
    [LABEL_MENU + MENU_RC_NAV_UP]       = "Sus",
    [LABEL_MENU + MENU_RC_NAV_LEFT]     = "Stanga",
    [LABEL_MENU + MENU_RC_NAV_DOWN]     = "Jos",
    [LABEL_MENU + MENU_RC_BASS_UP]      = "Bass +",
    [LABEL_MENU + MENU_RC_BASS_DOWN]    = "Bass -",
    [LABEL_MENU + MENU_RC_MIDDLE_UP]    = "Middle +",
    [LABEL_MENU + MENU_RC_MIDDLE_DOWN]  = "Middle -",
    [LABEL_MENU + MENU_RC_TREBLE_UP]    = "Treble +",
    [LABEL_MENU + MENU_RC_TREBLE_DOWN]  = "Treble -",
//    [LABEL_MENU + MENU_RC_LOUDNESS]     = "Loudness",
//    [LABEL_MENU + MENU_RC_SURROUND]     = "Surround",
    [LABEL_MENU + MENU_RC_EFFECT_3D]    = "Efect 3D",
//    [LABEL_MENU + MENU_RC_TONE_BYPASS]  = "Bypass tone",
    [LABEL_MENU + MENU_RC_TIME]         = "Timp",
    [LABEL_MENU + MENU_RC_STOP]         = "Oprire",
    [LABEL_MENU + MENU_RC_PLAY_PAUSE]   = "Redare/pauza",
//    [LABEL_MENU + MENU_RC_REW]          = "Rewind",
//    [LABEL_MENU + MENU_RC_FWD]          = "Flash forward",
    [LABEL_MENU + MENU_RC_TIMER]        = "Temporizator",
    [LABEL_MENU + MENU_RC_SP_MODE]      = "Mod Spectrograma",
    [LABEL_MENU + MENU_RC_SCR_DEF]      = "Ecran implicit",
};
