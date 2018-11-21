#include "labels.h"

#include "../rc.h"
#include "../eemul.h"

#define GENERATE_MENU_RC_TEXT(CMD)    [LABEL_MENU + MENU_RC_ ## CMD] =  # CMD,

static Lang lang = LANG_END;

extern const char *const labels_by[LABEL_END];
extern const char *const labels_ru[LABEL_END];

static const char *const labels_default[LABEL_END] = {
    [LABEL_SUNDAY]          = "SUNDAY",
    [LABEL_MONDAY]          = "MONDAY",
    [LABEL_TUESDAY]         = "TUESDAY",
    [LABEL_WEDNESDAY]       = "WEDNESDAY",
    [LABEL_THURSDAY]        = "THURSDAY",
    [LABEL_FRIDAY]          = "FRIDAY",
    [LABEL_SATURDAY]        = "SATURDAY",

    [LABEL_BRIGNTNESS]      = "Brightness",

    [LABEL_VOLUME]          = "Volume",
    [LABEL_BASS]            = "Bass",
    [LABEL_MIDDLE]          = "Middle",
    [LABEL_TREBLE]          = "Treble",
    [LABEL_FRONTREAR]       = "Front/rear",
    [LABEL_BALANCE]         = "Balance",
    [LABEL_CENTER]          = "Center",
    [LABEL_SUBWOOFER]       = "Subwoofer",
    [LABEL_PREAMP]          = "Preamp",

    [LABEL_GAIN0]           = "FM tuner",
    [LABEL_GAIN1]           = "Computer",
    [LABEL_GAIN2]           = "TV",
    [LABEL_GAIN3]           = "Bluetooth",
    [LABEL_GAIN4]           = "DVD-player",
    [LABEL_GAIN5]           = "Input 5",
    [LABEL_GAIN6]           = "Input 6",
    [LABEL_GAIN7]           = "Input 7",

    [LABEL_BOOL_OFF]        = "OFF",
    [LABEL_BOOL_ON]         = "ON",

    [LABEL_TUNER_IC + TUNER_IC_NO]      = "No",
    [LABEL_TUNER_IC + TUNER_IC_RDA5807] = "RDA5807",
    [LABEL_TUNER_IC + TUNER_IC_SI4703]  = "Si4703",

    [LABEL_TUNER_BAND + TUNER_BAND_FM_US_EUROPE]    = "US/Europe FM",
    [LABEL_TUNER_BAND + TUNER_BAND_FM_JAPAN]        = "Japan FM",
    [LABEL_TUNER_BAND + TUNER_BAND_FM_WORLDWIDE]    = "Worldwide FM",
    [LABEL_TUNER_BAND + TUNER_BAND_FM_EASTEUROPE]   = "East Europe FM",

    [LABEL_TUNER_STEP + TUNER_STEP_50K]     = "50kHz",
    [LABEL_TUNER_STEP + TUNER_STEP_100K]    = "100kHz",
    [LABEL_TUNER_STEP + TUNER_STEP_200K]    = "200kHz",

    [LABEL_TUNER_DEEMPH + TUNER_DEEMPH_50u] = "50us",
    [LABEL_TUNER_DEEMPH + TUNER_DEEMPH_75u] = "75us",

    [LABEL_AUDIO_IC + AUDIO_IC_NO]      = "No",
    [LABEL_AUDIO_IC + AUDIO_IC_TDA7439] = "TDA7439",
    [LABEL_AUDIO_IC + AUDIO_IC_TDA7313] = "TDA7313",
    [LABEL_AUDIO_IC + AUDIO_IC_PT232X]  = "PT232x",

    [LABEL_LANG + LANG_DEFAULT]         = "English",
    [LABEL_LANG + LANG_BY]              = "Беларуская",
    [LABEL_LANG + LANG_RU]              = "Русский",

    [LABEL_MENU + MENU_NULL]            = "Up menu",

    [LABEL_MENU + MENU_AUDIO_IC]        = "Audioproc",

    [LABEL_MENU + MENU_SETUP]           = "Settings",
    [LABEL_MENU + MENU_SETUP_LANG]      = "Language",
    [LABEL_MENU + MENU_SETUP_AUDIO]     = "Audio",
    [LABEL_MENU + MENU_SETUP_TUNER]     = "Tuner",
    [LABEL_MENU + MENU_SETUP_SPECTRUM]  = "Spectrum",
    [LABEL_MENU + MENU_SETUP_DISPLAY]   = "Display",
    [LABEL_MENU + MENU_SETUP_INPUT]     = "Input",
    [LABEL_MENU + MENU_SETUP_RC]        = "Remote",

    [LABEL_MENU + MENU_TUNER_IC]        = "Tuner IC",
    [LABEL_MENU + MENU_TUNER_BAND]      = "Band",
    [LABEL_MENU + MENU_TUNER_STEP]      = "Scan step",
    [LABEL_MENU + MENU_TUNER_DEEMPH]    = "Deemphasys",
    [LABEL_MENU + MENU_TUNER_FMONO]     = "Force mono",
    [LABEL_MENU + MENU_TUNER_RDS]       = "Enable RDS",
    [LABEL_MENU + MENU_TUNER_BASS]      = "Bass boost",
    [LABEL_MENU + MENU_TUNER_VOLUME]    = "Volume",

    [LABEL_MENU + MENU_SPECTURM_MODE]   = "Display mode",
    [LABEL_MENU + MENU_SPECTRUM_SPEED]  = "Fall speed",

    [LABEL_MENU + MENU_DISPLAY_BR_STBY] = "Standby brightness",

    [LABEL_MENU + MENU_INPUT_ENC_RES]   = "Encoder resolution",

//    FOREACH_CMD(GENERATE_MENU_RC_TEXT)

    [LABEL_MENU + MENU_RC_STBY_SWITCH]  = "Switch standby",
    [LABEL_MENU + MENU_RC_MUTE]         = "Mute",
    [LABEL_MENU + MENU_RC_VOL_UP]       = "Volume up",
    [LABEL_MENU + MENU_RC_VOL_DOWN]     = "Volume down",
    [LABEL_MENU + MENU_RC_MENU]         = "Menu",
    [LABEL_MENU + MENU_RC_CHAN_NEXT]    = "Next chan",
    [LABEL_MENU + MENU_RC_CHAN_PREV]    = "Prev chan",
    [LABEL_MENU + MENU_RC_IN_NEXT]      = "Next input",
    [LABEL_MENU + MENU_RC_IN_PREV]      = "Prev input",
    [LABEL_MENU + MENU_RC_IN_0]         = "Input 0",
    [LABEL_MENU + MENU_RC_IN_1]         = "Input 1",
    [LABEL_MENU + MENU_RC_IN_2]         = "Input 2",
    [LABEL_MENU + MENU_RC_IN_3]         = "Input 3",
    [LABEL_MENU + MENU_RC_IN_4]         = "Input 4",
    [LABEL_MENU + MENU_RC_IN_5]         = "Input 5",
    [LABEL_MENU + MENU_RC_IN_6]         = "Input 6",
    [LABEL_MENU + MENU_RC_IN_7]         = "Input 7",
    [LABEL_MENU + MENU_RC_BASS_UP]      = "Bass up",
    [LABEL_MENU + MENU_RC_BASS_DOWN]    = "Bass down",
    [LABEL_MENU + MENU_RC_MIDDLE_UP]    = "Middle up",
    [LABEL_MENU + MENU_RC_MIDDLE_DOWN]  = "Middle down",
    [LABEL_MENU + MENU_RC_TREBLE_UP]    = "Treble up",
    [LABEL_MENU + MENU_RC_TREBLE_DOWN]  = "Treble down",
    [LABEL_MENU + MENU_RC_LOUDNESS]     = "Loudness",
    [LABEL_MENU + MENU_RC_SURROUND]     = "Surround",
    [LABEL_MENU + MENU_RC_EFFECT_3D]    = "3D-effect",
    [LABEL_MENU + MENU_RC_TONE_BYPASS]  = "Bypass tone",
    [LABEL_MENU + MENU_RC_TIME]         = "Time",
    [LABEL_MENU + MENU_RC_STBY_ENTER]   = "Enter standby",
    [LABEL_MENU + MENU_RC_STBY_EXIT]    = "Exit standby",
};

static const char *labels[LABEL_END];

static void labelsFill(const char *const *src)
{
    for (Label l = 0; l < LABEL_END; l++) {
        labels[l] = (src[l] ? src[l] : labels_default[l]);
    }
}

void labelsSetLang(Lang value)
{
    lang = value;
    // TODO: Save in settings
}

Lang labelsGetLang(void)
{
    return  lang;
}

const char **labelsGet()
{
    switch (lang) {
    case LANG_BY:
        labelsFill(labels_by);
        break;
    case LANG_RU:
        labelsFill(labels_ru);
        break;
    default:
        labelsFill(labels_default);
        break;
    }

    return labels;
}

void labelsInit(void)
{
    // TODO: Read from settings
    lang = eeReadU(EE_LANGUAGE, LANG_DEFAULT);
}
