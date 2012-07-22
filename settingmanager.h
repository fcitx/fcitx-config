#ifndef SETTINGMANAGER_H
#define SETTINGMANAGER_H
#include <QList>
#include <configfile.h>

class SettingManager
{
public:
    SettingManager();

private:
    QList <ConfigFile> files;
};

#endif // SETTINGMANAGER_H
