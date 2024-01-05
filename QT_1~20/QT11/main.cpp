#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir mDir("E:Test");

    foreach(QFile mitm, mDir.entryInfoList())
    {
        qDebug() << mitm.absoulteFilePath();
        if(mitm.isDir())
            qDebug() << "Dir:" << mitm.absoulteFilePath();
        if(mitm.isFile())
            qDebug() << "File:" << mitm.absoulteFilePath();
    }

    return a.exec();
}
