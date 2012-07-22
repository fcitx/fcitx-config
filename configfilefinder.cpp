#include "configfilefinder.h"
#include <QDir>
#include <QDebug>
#include <configfile.h>
#include <QStringList>

/*
 * find a list of config file for current user
 * return an array of ConfigFile
 */

ConfigFileFinder::ConfigFileFinder()
{
    QDir dir(QDir::homePath() + "/.config/fcitx/conf");
    QStringList files = dir.entryList(QDir::Files);
    for (int i = 0; i< files.length(); i++) {
        ConfigFile c (QDir::homePath() + "/.config/fcitx/conf/" + files[i]);
        this->files.append(c);
        //qDebug() << c.dump();
    }
}

QList<ConfigFile> ConfigFileFinder::getFiles() {
    return this->files;
}
