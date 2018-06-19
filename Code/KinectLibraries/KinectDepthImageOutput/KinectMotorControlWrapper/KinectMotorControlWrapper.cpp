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
    //! Create some connections
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
        ui->_lbl_output_msg->setText("No devices found!!");
        freenect_shutdown(fc);
        return;
    }
    else
    {
        QString str = "Num devices found: " + QString::number(num_devices) + "\n";
        ui->_lbl_output_msg->setText(str);
    }

}
