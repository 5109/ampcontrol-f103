#ifndef SI470X_H
#define SI470X_H

#include <stdint.h>

#define SI470X_I2C_ADDR             0x20

// Some useful definitions

#define SI470X_BUF_STEREO(buf)      (buf[0] & SI740X_ST)

#define SI470X_RDBUF_SIZE           12
#define SI470X_WRBUF_SIZE           12

#define SI470X_CHAN_SPACING         10

#define SI470X_VOL_MIN              0
#define SI470X_VOL_MAX              15

void si470xReset(void);

void si470xInit(void);

void si470xSetFreq(uint16_t value);

void si470xSetMute(uint8_t value);
void si470xSetVolume(int8_t value);

void si470xSetPower(uint8_t value);

void si470xReadStatus();

void si470xSetMono(uint8_t value);
void si470xSetRds(uint8_t value);

void si470xSeek(int8_t direction);

#endif // SI470X_H
