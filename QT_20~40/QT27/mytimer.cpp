#include "mytimer.h"
#include <QtCore>
#include <QDebug>

MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MySLot));

    timer->start(1000);
}

void MyTimer::MySlot()
{
    qDebug() << "Timer executed";

}
