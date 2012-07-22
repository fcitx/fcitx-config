#include "configfilefinder.h"
#include <QDir>
#include <QDebug>

/*
 * find a list of config file for current user
 * return an array of ConfigFile
 */

ConfigFileFinder::ConfigFileFinder()
{
    QDir dir(QDir::homePath() + "/.config/fcitx/conf");
    //qDebug() << QDir::homePath().toStdString() + "/.config/fcitx/conf";
    this->files = dir.entryList(QDir::Files );
}

QStringList ConfigFileFinder::getFiles() {
    return this->files;
}
