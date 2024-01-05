#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread mThread1;
    mThread1.name = "mThread1";

    MyThread mThread2;
    mThread2.name = "mThread2";

    MyThread mThread3;
    mThread3.name = "mThread3";

    mThread1.start();
    //mThread1.start(QThread::HighestPriority); //QT29
    //mThread2.start();
    //mThread3.start(QThread::LowestPriority); //QT29

    mThread1.Stop = true;

    return a.exec();
}
