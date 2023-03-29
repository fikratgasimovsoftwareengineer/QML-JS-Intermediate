#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QString>
#include <QVariant>
#include "propertywrapper.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    propertyWrapper wrapper;
    wrapper.setUserName("Gasimov");
    wrapper.setFirstName("Fikrat");

   /* QString lastName = "Gasimov";
    QString firstName = "Fikrat";*/

    /* engine.rootContext()->setContextProperty("mLastname",QVariant::fromValue(lastName));
     engine.rootContext()->setContextProperty("mFirstname",QVariant::fromValue(firstName));*/

    // passing only setContext Object will make every properties of call
    // available to qml file, without explicity showing or without using (.)dot statement
    engine.rootContext()->setContextObject(&wrapper);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
