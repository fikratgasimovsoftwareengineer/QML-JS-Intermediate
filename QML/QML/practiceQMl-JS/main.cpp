#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "rootwrapper.h"


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    rootWrapper wrapperOfQMl;
    //wrapperOfQMl.setName("Fikrat");
    // engine root context
    engine.rootContext()->setContextProperty("rootWrapper", &wrapperOfQMl);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    engine.load(url);

    /*if (engine.rootObjects().isEmpty()){

        return -1;
    }else{

          wrapperOfQMl.setRootOfQML(engine.rootObjects().first());
    }*/

    return app.exec();
}
