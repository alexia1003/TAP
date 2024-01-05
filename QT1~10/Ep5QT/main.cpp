#include <QCoreApplication>

#include "cat.h"
#include <QDebug>

void test(Cat &cat)
{
    qInfo() << "addr" << &cat;
}

void test2(Cat *cat)
{
    qInfo() << "ptr" << cat;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;
    kitty.setObjectName("kitty");

    Cat death;
    death.setObjectName("death");

    test(kitty);
    test2(&kitty);

    test(death);
    test2(&death);

    //qInfo() << &kitty;

    return a.exec();
}
