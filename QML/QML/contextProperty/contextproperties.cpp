#include "contextproperties.h"
#include <QDebug>

contextProperties::contextProperties(QObject *parent)
    : QObject{parent}
{

}

void contextProperties::regularMethod()
{
    qDebug() << "this is c++ regular method     ";
}

QString contextProperties::regularMethodString(QString name, int age)
{
    return QString(name + ":" + QString::number(age) + "years old");

}

void contextProperties::getSlots()
{
    qDebug() << "this is c++ SLOTS";
}
