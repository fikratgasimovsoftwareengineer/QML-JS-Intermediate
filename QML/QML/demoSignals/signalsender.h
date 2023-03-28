#ifndef SIGNALSENDER_H
#define SIGNALSENDER_H

#include <QObject>
#include <QString>
#include <QTimer>

class signalSender : public QObject
{
    Q_OBJECT
public:
    explicit signalSender(QObject *parent = nullptr);

signals:

    void callQml(QString parameter);
    void calculateTime(QString value);

public slots:
    void cppSlot();

private:
    QTimer *mtimer;
    int mValue;

};

#endif // SIGNALSENDER_H
