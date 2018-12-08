#ifndef CANVAS_H
#define CANVAS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>

#include "../display/glcd.h"
#include "../tr/labels.h"
#include "../rtc.h"
#include "../spectrum.h"
#include "../tuner/tuner.h"
#include "../menu.h"

typedef struct {
    const char *label;
    int16_t value;
    int16_t min;
    int16_t max;
    uint8_t mStep;
    uint8_t icon;
} DispParam;

typedef struct {
    int16_t sc;                 // Count of bar lines
    uint8_t sw;                 // Width of bar line
    int16_t barY;               // Y pos of the bar
    uint16_t barW;              // Width of the bar
    uint8_t half;               // Height of upper/lower bar part
    uint8_t middle;             // Height of middle bar part
} CanvasBar;

typedef struct {
    int16_t width;
    int16_t height;

    struct {
        const tFont *hmsFont;       // Font to draw hours/minutes/seconds
        const tFont *dmyFont;       // Font to draw day/month/year
        const tFont *wdFont;        // Font to draw weekday
        uint8_t hmsY;               // Y position of hours/minutes/seconds
        uint8_t dmyY;               // Y position of day/month/year
        uint8_t wdY;                // Y position of weekday
    } time;
    struct {
        const tFont *headFont;      // Font to draw menu header
        const tFont *menuFont;      // Foft to draw menu item
        uint8_t itemCnt;            // Number of items can be shown
    } menu;
    struct {
        const tFont *valFont;       // Foft to draw tune label
        int16_t valY;               // Y position of the tune value
        CanvasBar bar;
    } tune;
    struct {
        uint8_t step;               // Step in pixels between spectrum columns
        uint8_t oft;                // Offset of visible part of the column
        uint8_t width;              // Width of visible part of the column
    } sp;
    struct {
        CanvasBar bar;
    } tuner;
    const tFont *lblFont;           // Main label font
    const tFont *iconSet;           // Main icon set
    uint16_t iconColor;             // Main icon color
} Layout;

typedef struct {
    Glcd *glcd;
    const Layout *lt;
    uint16_t color;
} Canvas;

// Canvas variants
void lt160x128Init(Canvas *canvas);
void lt176x132Init(Canvas *canvas);
void lt220x176Init(Canvas *canvas);
void lt320x240Init(Canvas *canvas);
void lt400x240Init(Canvas *canvas);
void lt480x320Init(Canvas *canvas);
void lt128x64Init(Canvas *canvas);
#ifdef EMUL_DISP
void ltEmulInit(Canvas **driver);
#endif

void canvasInit(void);
void canvasClear(void);

void canvasShowTime(bool clear, RTC_type *rtc);
void canvasShowMenu(void);
void canvasShowTune(bool clear, DispParam *dp, Spectrum *sp);
void canvasShowSpectrum(bool clear, Spectrum *spData);
void canvasShowTuner(Tuner *tuner);

#ifdef __cplusplus
}
#endif

#endif // CANVAS_H
