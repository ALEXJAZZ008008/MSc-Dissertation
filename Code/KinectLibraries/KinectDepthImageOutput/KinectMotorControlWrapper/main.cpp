#include <QApplication>
#include "KinectMotorControlWrapper.h"
//using namespace KinectDepthImageOutputWrapper;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setApplicationName("KinectMotorTest");
    a.setApplicationVersion(QObject::tr("0.0.1"));

    MotorControl w;
    w. show();

    return a.exec();
}
