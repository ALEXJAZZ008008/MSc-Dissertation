#include "KinectMotorControlWrapper.h"
#include "ui_motor_control.h"

#include <QMessageBox>

MotorControl::MotorControl(QDialog *parent):
    QDialog(parent),
    ui(new Ui::motor_control)
{
    ui->setupUi(this);
    create_connections();

    num_devices = 0;
}

MotorControl::~MotorControl()
{
    delete ui;
}

void MotorControl::create_connections()
{
    // Create some connections
}

int MotorControl::update_tilt_state()
{
    int status = freenect_update_tilt_state(fdev);

    if (status < 0)
    {
        ui->_lbl_output_msg->setText("Unable to retrieve tilt status!!\n");
        freenect_shutdown(fc);
        return 0;
    }

}

double MotorControl::get_camera_tilt()
{
    update_tilt_state();
    return freenect_get_tilt_degs(current_tilt_state);
}

void MotorControl::set_camera_tilt(double& val)
{
    //    update_tilt_state();
    if (freenect_get_tilt_status(current_tilt_state) == freenect_tilt_status_code::TILT_STATUS_STOPPED)
    {
        freenect_set_tilt_degs(fdev, val);
    }
}

void MotorControl::on__psh_connect_clicked()
{

    if ( freenect_init(&fc,NULL) < 0)
    {
        QMessageBox msgBox;
        QPushButton *abortButton = msgBox.addButton(QMessageBox::Abort);
        msgBox.setText("Initialisation error!");
        msgBox.exec();
        if (msgBox.clickedButton() == abortButton)
        {
            // abort nicely.
            return;
        }
    }

    freenect_set_log_level(fc, FREENECT_LOG_DEBUG);
    freenect_select_subdevices(fc, FREENECT_DEVICE_CAMERA);

    num_devices = freenect_num_devices(fc);
    ui->_lbl_output_msg->clear();

    if (num_devices == 0)
    {
        ui->_lbl_output_msg->setText("No devices found!!\n");
        freenect_shutdown(fc);
        return;
    }
    else
    {
        QString str = "Num devices found: " + QString::number(num_devices) + "\n";
        ui->_lbl_output_msg->setText(str);
    }

    // Open the first device.
    if (freenect_open_device(fc, &fdev, 0) < 0)
    {
        ui->_lbl_output_msg->setText("Unable to connect with camer!!\n");
        freenect_shutdown(fc);
        return;
    }

    get_camera_tilt();
}

void MotorControl::on_pushButton_clicked()
{
    double new_tilt  = get_camera_tilt();
    new_tilt += 1.0;
    set_camera_tilt(new_tilt);
    ui->_lne_current_tilt->setText(QString::number(new_tilt));
}

void MotorControl::on_pushButton_2_clicked()
{
    double new_tilt  = get_camera_tilt();
    new_tilt -= 1.0;
    set_camera_tilt(new_tilt);
    ui->_lne_current_tilt->setText(QString::number(new_tilt));
}
