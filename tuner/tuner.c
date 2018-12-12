#include "tuner.h"

#include <string.h>

#include "../eemul.h"

#ifdef _RDA580X
#include "rda580x.h"
#endif
#ifdef _SI470X
#include "si470x.h"
#endif
#ifdef _TEA5767
#include "tea5767.h"
#endif

static Tuner tuner;

void tunerReadSettings(void)
{
    // Read stored parameters
    memset(&tuner, 0, sizeof(tuner));

    tuner.par.ic = eeReadU(EE_TUNER_IC, TUNER_IC_RDA5807);

    tuner.par.flags = eeReadU(EE_TUNER_FLAGS, TUNER_FLAG_INIT);
    tuner.par.band = eeReadU(EE_TUNER_BAND, TUNER_BAND_FM_US_EUROPE);
    tuner.par.step = eeReadU(EE_TUNER_STEP, TUNER_STEP_100K);
    tuner.par.deemph = eeReadU(EE_TUNER_DEEMPH, TUNER_DEEMPH_50u);
    tuner.par.volume = eeReadI(EE_TUNER_VOLUME, TUNER_VOLUME_MAX) & 0xFF;

    tuner.par.freq = eeReadU(EE_TUNER_FREQ, 9950);
    tuner.status.freq = tuner.par.freq;

    // API initialization
    switch (tuner.par.ic) {
#ifdef _RDA580X
    case TUNER_IC_RDA5807:
        tuner.api.init = rda580xInit;

        tuner.api.setFreq = rda580xSetFreq;
        tuner.api.seek = rda580xSeek;

        tuner.api.setVolume = rda580xSetVolume;

        tuner.api.setMute = rda580xSetMute;
        tuner.api.setBassBoost = rda580xSetBassBoost;
        tuner.api.setForcedMono = rda580xSetForcedMono;
        tuner.api.setRds = rda580xSetRds;

        tuner.api.setPower = rda580xSetPower;

        tuner.api.updateStatus = rda580xUpdateStatus;
        break;
#endif
#ifdef _SI470X
    case TUNER_IC_SI4703:
        tuner.api.init = si470xInit;

        tuner.api.setFreq = si470xSetFreq;
        tuner.api.seek = si470xSeek;

        tuner.api.setVolume = si470xSetVolume;

        tuner.api.setMute = si470xSetMute;
        tuner.api.setForcedMono = si470xSetForcedMono;
        tuner.api.setRds = si470xSetRds;

        tuner.api.setPower = si470xSetPower;

        tuner.api.updateStatus = si470xUpdateStatus;
        break;
#endif
#ifdef _TEA5767
    case TUNER_IC_TEA5767:
        tuner.api.init = tea5767Init;

        tuner.api.setFreq = tea5767SetFreq;
        tuner.api.seek = tea5767Seek;

        tuner.api.setMute = tea5767SetMute;
        tuner.api.setForcedMono = 0;

        tuner.api.setPower = tea5767SetPower;

        tuner.api.updateStatus = tea5767UpdateStatus;
        break;
#endif
    default:
        break;
    }
}

void tunerSaveSettings(void)
{
    eeUpdate(EE_TUNER_FLAGS, tuner.par.flags & (~TUNER_FLAG_MUTE));
    eeUpdate(EE_TUNER_FREQ, (int16_t)tuner.status.freq);
}

void tunerInit(void)
{
    if (tuner.api.init) {
        tuner.api.init(&tuner.par, &tuner.status);
    }
}

Tuner *tunerGet(void)
{
    return &tuner;
}

void tunerSetPower(bool value)
{
    if (!value) {
        tunerSaveSettings();
    }

    if (tuner.api.setPower) {
        tuner.api.setPower(value);
    }
}

void tunerSetFreq(uint16_t value)
{
    uint16_t freqMin = tuner.par.fMin;
    uint16_t freqMax = tuner.par.fMax;

    if (value < freqMin) {
        value = freqMin;
    } else if (value > freqMax) {
        value = freqMax;
    }

    tuner.par.freq = value;

    if (tuner.api.setFreq) {
        tuner.api.setFreq(value);
    }
}

void tunerSetFlag(TunerFlag flag, bool value)
{
    if (value)
        tuner.par.flags |= flag;
    else
        tuner.par.flags &= ~flag;

    switch (flag) {
    case TUNER_FLAG_MUTE:
        if (tuner.api.setMute) {
            tuner.api.setMute(value);
        }
        break;
    case TUNER_FLAG_BASS:
        if (tuner.api.setBassBoost) {
            tuner.api.setBassBoost(value);
        }
        break;
    case TUNER_FLAG_FMONO:
        if (tuner.api.setForcedMono) {
            tuner.api.setForcedMono(value);
        }
        break;
    case TUNER_FLAG_RDS:
        if (tuner.api.setRds) {
            tuner.api.setRds(value);
        }
        break;
    default:
        break;
    }
}

void tunerNextStation(int8_t direction)
{
    // Temporarly
    if (tuner.api.seek) {
        tuner.api.seek(direction);
    }
}

void tunerUpdateStatus(void)
{
    if (tuner.api.updateStatus) {
        tuner.api.updateStatus();
    }
}
