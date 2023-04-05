#include "batterycheck.h"

batteryCheck::batteryCheck(QObject *parent)
    : QObject{parent},
      m_batterLevel(45)
{

}

int batteryCheck::batterLevel() const
{
    return m_batterLevel;

}

void batteryCheck::setBatterLevel(int batterLevel)
{
    if(m_batterLevel == batterLevel)
        return;
    m_batterLevel = batterLevel;

    emit batterLevelChanged(m_batterLevel);
}
