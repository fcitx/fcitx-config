#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include <QFile>

class ConfigFile : public QFile
{
    Q_OBJECT
public:
    explicit ConfigFile(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // CONFIGFILE_H
