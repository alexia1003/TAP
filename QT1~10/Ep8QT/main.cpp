#include <QCoreApplication>
#include <QScopedPointer>
#include "test.h"

void testScope()
{
    QScopedPointer<Test> ptr(new Test());
    ptr->message("Hi");
}

void finish(QScopedPointer<Test>& ptr)
{
    ptr->message("Finished");
}

void work(QScopedPointer<Test>& ptr)
{
    ptr->message("Working");
}

void step(QScopedPointer<Test>& ptr)
{
    ptr->message("Stepping");
    for(int i=0; i<3; i++)
    {
        work(ptr);
    }
    finish(ptr);
}

void testShared(Test* test)
{
    QScopedPointer<Test> ptr(new Test());
    ptr->message("Starting");
    step(ptr);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    testShared(new Test());

    //testScope();

    return a.exec();
}
