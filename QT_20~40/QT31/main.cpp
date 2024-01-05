#include "mainwindow.h"

#include <QApplication>
#include "mythread.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //MainWindow w;
    //w.show();

    // QT33

    MyThread mThread;

    mThread.start();

    mThread.wait();
    qDebug() << "Done!";


    return a.exec();
}
