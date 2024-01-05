#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QQmlEngine>

class Cat : public QObject
{
    QML_ELEMENT
public:
    explicit Cat(QObject *parent = nullptr);

signals:
};

#endif // CAT_H
