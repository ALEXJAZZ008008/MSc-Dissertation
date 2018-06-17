#include <QCoreApplication>

#include <iostream>
#include "kinectdepthimageoutputwrapper.h"

using namespace std;
using namespace KinectDepthImageOutputWrapper;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello World!" << endl;

    KinectDepthImageOutputToConsole();

    return a.exec();
}
