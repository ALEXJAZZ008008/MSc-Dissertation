#include <QApplication>
#include "KinectMotorControlWrapper.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setApplicationName("KinectMotorTest");
    a.setApplicationVersion(QObject::tr("0.0.1"));

    MotorControl::getInstance().show();


    return a.exec();
}
