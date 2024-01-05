#include "test.h"
#include <QDebug>

Test::Test(QObject *parent)
    : QObject{parent}
{}

void Test::dostuff()
{
    qInfo() << "Doing stuff";
    emit close();
}
