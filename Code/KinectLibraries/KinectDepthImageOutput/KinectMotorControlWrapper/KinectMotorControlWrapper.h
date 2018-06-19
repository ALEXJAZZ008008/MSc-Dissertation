#ifndef KINECTMOTORCONTROLWRAPPER_H
#define KINECTMOTORCONTROLWRAPPER_H

#include "kinectdepthimageoutputlibrary.h"

#include <QDialog>
#include <QPushButton>
#include <QLabel>

#include "libfreenect.h"

using namespace std;
using namespace KinectDepthImageOutputLibrary;

namespace Ui {
class motor_control;
}


class MotorControl : public QDialog
{
    Q_OBJECT

public:
    explicit MotorControl(QDialog *parent = 0);
    ~MotorControl();

private slots:
    void on__psh_connect_clicked();

private:
    Ui::motor_control *ui;

    void create_connections();

    freenect_context* fc;

    int num_devices;

};



#endif // KINECTDEPTHIMAGEOUTPUTWRAPPER_H
