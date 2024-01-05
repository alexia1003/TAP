#include "test.h"
#include <QObject>
#include <QDebug>

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructed" << parent;
}

Test::~Test()
{
    qInfo() << this << "Deconstructed" << parent();
}
