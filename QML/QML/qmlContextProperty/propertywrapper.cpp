#include "propertywrapper.h"


propertyWrapper::propertyWrapper(QObject *parent)
    : QObject{parent},
      m_username("Username"),
      m_firstname("FirstName"),
      m_timer(new QTimer(this)),
      time_val(0)
{
    srand(static_cast<unsigned int>(time(nullptr)));

    QStringList listofNames;

    listofNames<<"Hikmat"<<"Fredd"<<"Wiva"<<"Nicola";

    connect(m_timer, &QTimer::timeout, [=]()
    {

        time_val = rand() % (listofNames.size());
        setFirstName(listofNames[time_val]);


    });

    // every 2 seconds chnage the name
    m_timer->start(2000);
}

void propertyWrapper:: setUserName(QString username)
{
    if (m_username == username)
        return ;
    m_username = username;

    emit userNameChanged(m_username);

}

QString propertyWrapper::getUserName()
{
    return QString(m_username);
}

void propertyWrapper::setFirstName(QString firstname)
{
    if (m_firstname == firstname)
        return ;

    m_firstname =firstname;

    emit firstNameChanged(m_firstname);

}

QString propertyWrapper::getFirstName()
{
    return QString(m_firstname);
}

