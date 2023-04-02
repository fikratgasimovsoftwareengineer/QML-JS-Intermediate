#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "systems.h"
#include <QQmlContext>

#include "temphandler.h"
#include "volumecontroller.h"


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    systems systems_ui;

    tempHandler temp_driver_handler;
    tempHandler temp_passenger_handler;

    volumeController m_volumeController;

    QQmlApplicationEngine engine;

    // root objects handlers
    engine.rootContext()->setContextProperty("systems", &systems_ui);
    // put string in a way that we can access it independently
    engine.rootContext()->setContextProperty("tempHandlerDriver", &temp_driver_handler);
    // put string in a way that we can access it independently
    engine.rootContext()->setContextProperty("tempHandlerPassenger", &temp_passenger_handler);

    // audio controller
    engine.rootContext()->setContextProperty("volumeController", &m_volumeController);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
