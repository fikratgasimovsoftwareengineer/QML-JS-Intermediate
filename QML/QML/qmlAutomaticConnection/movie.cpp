#include "movie.h"
#include <QDebug>

Movie::Movie(QObject *parent)
    : QObject{parent},
      m_title("Move title"),
      m_mainCharacter("Main Character")
{

}

void Movie::setMainCharacter(QString mainCharacter)
{
    qDebug() << "set to main characterd";
   if(m_mainCharacter == mainCharacter){

      return ;
   }

   m_mainCharacter = mainCharacter;
   emit mainCharacterChanged(m_mainCharacter);
}

QString Movie::getMainCharacter() const
{
    qDebug() << "get to main characterd";
    return m_mainCharacter;

}

void Movie::setTitle(QString title)
{
    qDebug() << "set to TITLE";
    if (m_title==title){

        return;
    }
    m_title = title;
    emit titleChanged(m_title);

}

QString Movie::getTitle() const
{
    qDebug() << "get to TITLE characterd";
    return m_title;
}
