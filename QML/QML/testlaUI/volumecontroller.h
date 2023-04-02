#ifndef VOLUMECONTROLLER_H
#define VOLUMECONTROLLER_H

#include <QObject>

class volumeController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int volStatus READ volStatus WRITE setVolStatus NOTIFY volStatusChanged)
public:
    explicit volumeController(QObject *parent = nullptr);
    Q_INVOKABLE void volumeChanged(const int &newVolume);


    int volStatus() const;

public slots:
    void setVolStatus(int volStatus);

signals:
    void volStatusChanged(int volStatus);

private:
    int m_volStatus;
};


#endif // VOLUMECONTROLLER_H
