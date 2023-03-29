#ifndef MOVIE_H
#define MOVIE_H

#include <QObject>
#include <QString>

/**Automatic connection between qt creator code and qml*/


class Movie : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString mainCharacter READ getMainCharacter WRITE setMainCharacter NOTIFY mainCharacterChanged)
    Q_PROPERTY(QString title READ getTitle WRITE setTitle NOTIFY titleChanged)

public:
     explicit Movie(QObject *parent = nullptr);

     void setMainCharacter(QString mainCharacter);
     QString getMainCharacter() const;

     void setTitle(QString title);
     QString getTitle() const;


signals:

    void mainCharacterChanged(QString mainCharacter);
    void titleChanged(QString title);

private:

    QString m_mainCharacter;
    QString m_title;
};

#endif // MOVIE_H
