#ifndef CONFIGFILEFINDER_H
#define CONFIGFILEFINDER_H

#include <QString>
#include <QStringList>

class ConfigFileFinder
{
public:
    explicit ConfigFileFinder();
    QStringList getFiles();
private:
    QStringList files;
    
};

#endif // CONFIGFILEFINDER_H
