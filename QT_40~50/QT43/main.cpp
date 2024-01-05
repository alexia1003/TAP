#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <algorithm>
#include <QStringList>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // QT45
    QVector<QString> Vect(5);

    //qFill(Vect.begin() + 1, Vect.end() -2, "LOL");
    std::fill(Vect.begin() + 1, Vect.end() - 2, "LOL");

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }

    // QT44
    /*
    QStringList List;
    List << "a" << "b" << "c";

    QVector<QString> Vect(3);

    //qCopy(List.begin(), List.end(), Vect.begin());
    std::copy(List.begin(), List.end(), Vect.begin());

    foreach(QString itm, Vect)
    {
        qDebug() << itm;
    }
    */

    // QT43
    /*
    QList<int> List;

    List <<2 << 3 << 1 << 0;

    //qSort(List.begin() + 1, List.end() - 1);
    std::sort(List.begin() + 1, List.end() - 1);

    foreach(int i, List)
    {
        qDebug() << i;
    }
    */

    return a.exec();
}
