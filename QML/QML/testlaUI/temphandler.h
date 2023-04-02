#ifndef TEMPHANDLER_H
#define TEMPHANDLER_H

#include <QObject>

class tempHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int targetTemp READ targetTemp WRITE setTargetTemp NOTIFY targetTempChanged)

public:
    explicit tempHandler(QObject *parent = nullptr);
    int targetTemp() const;

    Q_INVOKABLE void setIncrementTemp(const int &val);

public slots:
    void setTargetTemp(int targetTemp); // slots
signals:

    void targetTempChanged(int targetTemp); //signal

private:

    int m_targetTemp;
};

#endif // TEMPHANDLER_H
