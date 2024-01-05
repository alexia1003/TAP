#include <QCoreApplication>

void readme(QString &name)
{
    name.insert(0,"Mr.");
    qInfo() << "Changed" << name;
}

void readonly(QStringView name)
{
    qInfo() << "name" << name.data() << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString firstname = "Ana";
    QString lastname = "Anne";

    // Coppy and modification issues
    readme(firstname);
    qInfo() << "Original" << firstname;

    // Read only, no copy
    qInfo() << "name" << firstname.data() << firstname;
    readonly(firstname);

    // Basic parsing
    QString fullname = firstname + " " + lastname;

    foreach(QStringView part, QStringView(fullname).split(QChar(' ')))
    {
        qInfo() << "part" << part;
        if(part.startsWith(QStringView(firstname),Qt::CaseInsensitive))
        {
            qInfo() << "*first name detected*";
            readonly(QStringView(firstname).mid(1,3));
        }
    }

    return a.exec();
}
