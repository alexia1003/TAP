#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include <QtCore>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    // QT39
    List << 1 << 3 << 5;

    foreach(int i, List)
    {
        qDebug() << i;
    }

    /*
    for(int i = 0; i < 10; i++)
    {
        List.append(i);
    }
    */

    //QListIterator<int> Iter(List);
    QMutableListIterator<int> Iter(List);

    // QT37
    /*
    Iter.toBack();

    while(Iter.hasPrevious())
    {
        qDebug() << Iter.previous();
        if(Iter.hasPrevious())
        {
            qDebug() << "next..." << Iter.peekPrevious();
        }
    }
    */

    // QT38
    while(Iter.hasNext())
    {
        int i = Iter.next();
        if(i == 5)
        {
            Iter.remove();
        }
    }

    Iter.toFront();

    while(Iter.hasNext())
    {
        qDebug() << Iter.next();
    }

    return a.exec();
}
