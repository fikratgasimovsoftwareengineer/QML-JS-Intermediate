#include "signalsender.h"

signalSender::signalSender(QObject *parent)
    : QObject{parent},
      mtimer(new QTimer(this)),
      mValue(0)
{
    connect(mtimer, &QTimer::timeout, [=](){
        ++mValue;
        emit calculateTime(QString::number(mValue));
    });
    mtimer->start(1000);
}

void signalSender::cppSlot()
{
    emit callQml("Information from C++");
}
