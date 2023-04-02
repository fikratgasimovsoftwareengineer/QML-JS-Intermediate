#include "temphandler.h"

tempHandler::tempHandler(QObject *parent)
    : QObject{parent},
    m_targetTemp(70)
{

}

int tempHandler::targetTemp() const
{
    return m_targetTemp;
}

void tempHandler::setIncrementTemp(const int &val)
{
    int newTargetTempInc = m_targetTemp + val;
    setTargetTemp( newTargetTempInc);
}

void tempHandler::setTargetTemp(int targetTemp)
{
    if (m_targetTemp == targetTemp)
        return;

    m_targetTemp = targetTemp;
    emit targetTempChanged(m_targetTemp);
}
