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

//!
//! \class
//! \brief The MotorControl class.
//! Finds and connects to a Kinect camera.
//! I case of multiple connected cameras, only the first
//! will be considered.
//!
class MotorControl : public QDialog
{
    Q_OBJECT

public:
    explicit MotorControl(QDialog *parent = 0);
    ~MotorControl();

    double get_camera_tilt();

    void set_camera_tilt(double &);

private slots:
    void on__psh_connect_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::motor_control *ui;
    //! Create connections
    void create_connections();

    int update_tilt_state();
    //! Holds information about the usb context.
    freenect_context* fc;
    //! Holds device information.
    freenect_device* fdev;
    //! Current tilt state.
    freenect_raw_tilt_state* current_tilt_state;
    //! Number of devices connected to the PC.
    int num_devices;

    double current_tilt_deg;

};



#endif // KINECTDEPTHIMAGEOUTPUTWRAPPER_H
