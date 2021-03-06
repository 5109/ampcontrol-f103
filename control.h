#ifndef CONTROL_H
#define CONTROL_H

#ifdef __cplusplus
extern "C" {
#endif

#include "actions.h"
#include "audio/audiodefs.h"

void controlInit(void);

void controlIRQ(char data);

void controlGetData(void);

void controlReportAmpStatus(void);
void controlReportAudioInput(void);
void controlReportAudioTune(AudioTune tune);

void controlReportTuner(bool force);
void controlReportAll(void);

#ifdef __cplusplus
}
#endif

#endif // CONTROL_H
