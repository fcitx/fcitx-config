#include <QApplication>
#include "qmlapplicationviewer.h"
#include "settingmanager.h"
#include <QDeclarativeContext>
#include <QDebug>

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    SettingManager m;

    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.rootContext()->setContextProperty("settingManager", &m);
    viewer.setMainQmlFile(QLatin1String("qml/fcitxconfig/SettingManager.qml"));
    viewer.showExpanded();


    return app->exec();


}
