#ifndef CONTEXTPROPERTIES_H
#define CONTEXTPROPERTIES_H

#include <QObject>
#include <QQmlContext>
class contextProperties : public QObject
{
    Q_OBJECT
public:
    explicit contextProperties(QObject *parent = nullptr);

    // With class methods declared as regular public functions
    // w need to add Q_INVOKABLE  property to let compiler to regonize them
    // from qml file
    Q_INVOKABLE void regularMethod();
    Q_INVOKABLE QString regularMethodString(QString name, int age);

signals:

public slots:
    void getSlots();

};

#endif // CONTEXTPROPERTIES_H
