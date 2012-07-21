#include "configfilefinder.h"
#include <QDir>
#include <iostream>
using namespace std;

/*
 * find a list of config file for current user
 * return an array of ConfigFile
 */

ConfigFileFinder::ConfigFileFinder()
{
    QDir dir(QDir::homePath() + "/.config/fcitx/conf");
    cout << QDir::homePath().toStdString() + "/.config/fcitx/conf" << endl;
    this->files = dir.entryList(QDir::Files );
}

QStringList ConfigFileFinder::getFiles() {
    return this->files;
}
