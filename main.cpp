#include <QApplication>
#include "qmlapplicationviewer.h"
#include "configfilefinder.h"
#include "configfile.h"
#include <QDebug>
#include <QDir>

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    /*
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qml/fcitxconfig/main.qml"));
    viewer.showExpanded();


    return app->exec();
    */
    ConfigFileFinder c;
    QStringList s = c.getFiles();
    for ( QStringList::Iterator it = s.begin(); it != s.end(); ++it ) {
        qDebug() << (*it);
    }

    ConfigFile f(QDir::homePath() + "/.config/fcitx/conf/fcitx-chttrans.config");
    f.readOptions();
    qDebug() << f.dump();
    //f.save();



}
