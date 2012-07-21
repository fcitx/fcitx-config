#ifndef SETTINGMANAGER_H
#define SETTINGMANAGER_H
#include <QList>

class SettingManager
{
public:
    SettingManager();

private:
    QList <ConfigFile> files;
};

#endif // SETTINGMANAGER_H
