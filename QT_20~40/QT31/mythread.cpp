#include "mythread.h"
#include <QtCore>
#include <QDebug>

MyThread::MyThread(QObject *parent) : QThread(parent)
{

}

void MyThread::run()
{
    for(int i=0; i<1000; i++)
    {
        // QT 31
        /*
        QMutex mutex;
        mutex.lock();

        if(this->Stop)
        {
            break;
        }

        mutex.unlock();

        emit NumberChanged(i);

        this->msleep(1000);
        */

        // QT 33
        qDebug() << i;
        msleep(500);



    }
}
