#ifndef QMLJSCALLER_H
#define QMLJSCALLER_H

#include <QObject>

class qmlJSCaller : public QObject
{
    Q_OBJECT
public:
    explicit qmlJSCaller(QObject *parent = nullptr);

    Q_INVOKABLE void cppMethod(QString parameter);


    void setQmlRootObject(QObject *newQmlRootObject);

signals:


private:
    void callJSMethod(QString param);
    QObject *qmlRootObject;
};

#endif // QMLJSCALLER_H
