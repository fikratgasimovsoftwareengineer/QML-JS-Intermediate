#include "qmljscaller.h"
#include <QDebug>


qmlJSCaller::qmlJSCaller(QObject *parent)
    : QObject{parent}
{

}

void qmlJSCaller::cppMethod(QString parameter)
{
    qDebug() << "It is Called from C++";
    callJSMethod(parameter);
}

void qmlJSCaller::callJSMethod(QString param)
{
    QVariant returnedValue; // return value
    QVariant cppParameter = QVariant::fromValue(param); // passing argument

    QMetaObject::invokeMethod(qmlRootObject, "qmlJSFunction",
                              Q_RETURN_ARG(QVariant, returnedValue),
                              Q_ARG(QVariant, cppParameter));

    qDebug() << "C++ talking, done called QML Javascript,\n" <<
                "return value: " << returnedValue.toString() ;
}

void qmlJSCaller::setQmlRootObject(QObject *newQmlRootObject)
{
    qmlRootObject = newQmlRootObject;
}
