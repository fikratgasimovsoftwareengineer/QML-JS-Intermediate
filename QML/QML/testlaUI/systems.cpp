#include "systems.h"
#include <QDebug>
systems::systems(QObject *parent)
    : QObject{parent},
      m_carLocked(true), //car set lock
      m_outDoorTemp(64),
      m_userName("Andrea")
{
    // initialize timer
    m_currentTimeTimer = new QTimer(this);
    m_currentTimeTimer->setInterval(500);

    m_currentTimeTimer->setSingleShot(true);

    connect(m_currentTimeTimer, &QTimer::timeout, this, &systems::currentTimeTimeout);

    currentTimeTimeout();
}

bool systems::carLocked() const
{
    return m_carLocked;
}

int systems::outDoorTemp() const
{
    return m_outDoorTemp;
}

QString systems::userName() const
{
    return m_userName;
}

void systems::setCarLocked(bool carLocked)
{
    if (m_carLocked== carLocked)

        return ;

    m_carLocked = carLocked;
    emit carLockedChanged(m_carLocked);

}

void systems::setOutDoorTemp(int outDoorTemp)
{
    if (m_outDoorTemp == outDoorTemp)
        return ;
    m_outDoorTemp == outDoorTemp;

    emit outDoorTempChanged(m_outDoorTemp);
}

void systems::setUserName(QString &userName)
{
    if(m_userName == userName)
        return ;
    m_userName = userName;

    emit userNameChanged(m_userName);
}

QString systems::currentTime() const
{
    return m_currentTime;
}

void systems::currentTimeTimeout()
{
    QDateTime timeData;
    // initialize current time here
    QString currentTime = timeData.currentDateTime().toString("hh:mm ap");
    //qDebug() << currentTime;
    // call the slots here
    setCurrentTime(currentTime);
    m_currentTimeTimer->start();
}

void systems::setCurrentTime(const QString &newCurrentTime)
{
    if (m_currentTime == newCurrentTime)
        return;
    m_currentTime = newCurrentTime;
    emit currentTimeChanged();
}
