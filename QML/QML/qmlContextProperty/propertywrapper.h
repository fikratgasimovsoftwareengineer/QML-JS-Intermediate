#ifndef PROPERTYWRAPPER_H
#define PROPERTYWRAPPER_H

#include <QObject>
#include <QTimer>
#include <ctime>
#include <QList>
#include <QString>
#include <time.h>

class propertyWrapper : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString username READ getUserName WRITE setUserName NOTIFY userNameChanged)
    Q_PROPERTY(QString firstname READ getFirstName WRITE setFirstName NOTIFY firstNameChanged)


public:
    explicit propertyWrapper(QObject *parent = nullptr);

    void setUserName(QString username);
    QString getUserName() ;

    void setFirstName(QString firstname);
    QString getFirstName();

signals:
    void userNameChanged(QString username);
    void firstNameChanged(QString firstname);


private:
    QString m_username;
    QString m_firstname;

    QTimer *m_timer;
    int time_val;
};

#endif // PROPERTYWRAPPER_H
