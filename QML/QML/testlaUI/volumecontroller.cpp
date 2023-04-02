#include "volumecontroller.h"

volumeController::volumeController(QObject *parent)
    : QObject{parent},
      m_volStatus(51)
{

}

void volumeController::volumeChanged(const int &newVolume)
{
    int volumeNewValue = m_volStatus + newVolume;
    if(volumeNewValue <= 0){

        volumeNewValue = 0;
    }
    else if (volumeNewValue >= 100){

        volumeNewValue = 100;
    }
    setVolStatus(volumeNewValue);
}

int volumeController::volStatus() const
{
    return m_volStatus;
}

void volumeController::setVolStatus(int volStatus)
{
    if(m_volStatus == volStatus)
        return ;
    m_volStatus = volStatus;

    emit volStatusChanged(m_volStatus);
}
