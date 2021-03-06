#ifndef AMPUI_H
#define AMPUI_H

#include "ui_amp.h"

#include <QMainWindow>
#include <QSettings>
#include <QSet>

#define ORGANIZATION_NAME           "WiseLord"
#define ORGANIZATION_DOMAIN         "github.io"
#define APPLICATION_NAME            "EmulDisp"

class Amp : public QMainWindow, private Ui::Amp
{
    Q_OBJECT

public:
    explicit Amp(QWidget *parent = nullptr);
    void initDisp(void);

    EmulDisp *getEmulDisp();

    void eeUpdateRaw(uint16_t addr, uint16_t data);
    uint16_t eeReadRaw(uint16_t addr);

    uint8_t bus;

    void showMessage(const QString &text, int timeout = 0);

private:
    int dialValue;
    int dialMax;

    void dialChanged(int value);

    QSettings *settings;

private slots:
    void on_btn0_pressed();
    void on_btn0_released();
    void on_btn1_pressed();
    void on_btn1_released();
    void on_btn2_pressed();
    void on_btn2_released();
    void on_btn3_pressed();
    void on_btn3_released();
    void on_btn4_pressed();
    void on_btn4_released();
    void on_btn5_pressed();
    void on_btn5_released();
    void on_dial_valueChanged(int value);
    void on_dial_sliderMoved(int position);

protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent*);};

#endif // AMPUI_H
