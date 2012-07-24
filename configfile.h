#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include <QString>
#include <QList>
#include "configoption.h"

class ConfigFile
{
public:
    ConfigFile(QString path);
    void print();
    QString dump();
    void save();
    void setOption(QString key, QString newValue);

private:
    QList<ConfigOption> options;
    void readOptions();
    QString title;
    QString path;

};

#endif // CONFIGFILE_H
