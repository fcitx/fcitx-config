#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include <QString>
#include <QList>
#include "configoption.h"

class ConfigFile
{
public:
    ConfigFile(QString path);
    void readOptions();
    void print();
    QString dump();
    void save();

private:
    QList<ConfigOption> options;
    QString title;
    QString path;
};

#endif // CONFIGFILE_H
