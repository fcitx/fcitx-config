#ifndef CONFIGFILEFINDER_H
#define CONFIGFILEFINDER_H

#include <QList>
#include <configfile.h>

class ConfigFileFinder
{
public:
    explicit ConfigFileFinder();
    QList<ConfigFile> getFiles();
private:
    QList<ConfigFile> files;
    
};

#endif // CONFIGFILEFINDER_H
