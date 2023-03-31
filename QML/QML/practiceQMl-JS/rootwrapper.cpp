#include "rootwrapper.h"

rootWrapper::rootWrapper(QObject *parent)
    : QObject{parent}
{


}

/*void rootWrapper::setRootOfQML(QObject *obj)
{

    unknownObj = obj;
}*/

QString rootWrapper::setName(QString name)
{
    if (m_name==name){

        return 0;
    }
    m_name = name;

    return m_name;
}


// call slot
void rootWrapper::changeName()
{
    //emit signal
    m_name = "Hikmat";
    emit emitSignal(m_name);
}

/*void rootWrapper::changeName(QString name_f)
{
    m_name = name_f;
    emit emitSignal(m_name);
    return m_name;
}*/
