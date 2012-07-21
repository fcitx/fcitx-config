#include "configfile.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QDebug>
#include <QDir>

/*
 * a ConfigFile has many config options
 */

ConfigFile::ConfigFile(QString path)
{
    this->path = path;


}

void ConfigFile::print() {

}

void ConfigFile::readOptions()
{
    QFile file(this->path);
    qDebug() << this->path;

    QString line;
    if ( file.open(QIODevice::ReadOnly) ) {
      // file opened successfully
      QTextStream t( &file );        // use a text stream
      // until end of file...
      while ( !t.atEnd() ) {
        // read and parse the command line
        line = t.readLine();         // line of text excluding '\n'
        // do something with the line
        qDebug() << "test "<< line;
      }
      // Close the file
      file.close();
    }


}
