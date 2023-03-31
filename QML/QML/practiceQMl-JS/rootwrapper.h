#ifndef ROOTWRAPPER_H
#define ROOTWRAPPER_H

#include <QObject>


class rootWrapper : public QObject
{
    Q_OBJECT

public:
    explicit rootWrapper(QObject *parent = nullptr);

    //void setRootOfQML(QObject *obj); // set object to qml

    Q_INVOKABLE QString setName(QString name);


public slots:
      void changeName();

signals:
       void emitSignal(QString ch_name);

private:
    QObject *unknownObj;

    QString m_name;
};

#endif // ROOTWRAPPER_H
