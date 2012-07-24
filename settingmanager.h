#ifndef SETTINGMANAGER_H
#define SETTINGMANAGER_H
#include <QList>
#include <configfile.h>
#include <QObject>

class SettingManager : public QObject
{
    Q_OBJECT
public:
    SettingManager();
    Q_INVOKABLE QString test();
signals:

public slots:

private:
    QList <ConfigFile> files;
};

#endif // SETTINGMANAGER_H
