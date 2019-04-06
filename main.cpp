#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "Models/gameboardmodel.h"
#include "Controler/editorctrl.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<EditorCtrl>("Controler", 1, 0, "EditorCtrl");
    qmlRegisterType<GameboardModel>("Models", 1, 0, "GameboardModel");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
