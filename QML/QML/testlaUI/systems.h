#ifndef SYSTEMS_H
#define SYSTEMS_H

#include <QObject>
#include <QTimer>
#include <QDateTime>

class systems : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged)
    Q_PROPERTY(int outDoorTemp READ outDoorTemp WRITE setOutDoorTemp NOTIFY outDoorTempChanged)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)
    Q_PROPERTY(QString currentTime READ currentTime WRITE setCurrentTime NOTIFY currentTimeChanged)

public:
    explicit systems(QObject *parent = nullptr);


    bool carLocked() const; // get systems

    // get temp
    int outDoorTemp() const;

    QString userName() const;

    // current time
    QString currentTime() const;


    void currentTimeTimeout();

public slots:
    // slot for lock
    void setCarLocked(bool carLocked); //set systems

    // slot for outdoor temp
    void setOutDoorTemp(int outDoorTemp);

    // slot for username
    void setUserName(QString &userName);

    void setCurrentTime(const QString &newCurrentTime);




signals:

    void carLockedChanged(bool carLocked);

    // signal for temp
    void outDoorTempChanged(int outDoorTemp);

    // emit signal username
    void userNameChanged(QString userName);

    // current time
    void currentTimeChanged();

private:
    bool m_carLocked;
    int m_outDoorTemp;
    QString m_userName;
    // current time
    QString m_currentTime;

    QTimer *m_currentTimeTimer;
};

#endif // SYSTEMS_H
