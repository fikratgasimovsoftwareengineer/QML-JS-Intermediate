#ifndef BATTERYCHECK_H
#define BATTERYCHECK_H

#include <QObject>

class batteryCheck : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int batterLevel READ batterLevel WRITE setBatterLevel NOTIFY batterLevelChanged)

public:
    explicit batteryCheck(QObject *parent = nullptr);

    int batterLevel() const;

public slots:
    void setBatterLevel(int batterLevel);

signals:
    void batterLevelChanged(int batterLevel);

private:
    int m_batterLevel;

};

#endif // BATTERYCHECK_H
