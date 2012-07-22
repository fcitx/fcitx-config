#include "configfile.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QDebug>
#include <QDir>
#include <QChar>
//#include "configoption.h"

/*
 * a ConfigFile has many config options
 */

ConfigFile::ConfigFile(QString path)
{
    this->path = path;


}

void ConfigFile::print() {
    qDebug() << "title" << this->title;
    for (int i = 0; i< this->options.length(); i++) {
        this->options[i].print();
    }
}

QString ConfigFile::dump () {
    QString output = this->title + "\n";
    for (int i = 0; i< this->options.length(); i++) {
        output += this->options[i].dump();
    }
    return output;
}

void ConfigFile::save() {
    QFile file(this->path);
    if ( file.open(QIODevice::WriteOnly| QIODevice::Truncate) ) {
        QTextStream t( &file );
        t << this->dump();
        file.close();
    }

}
void ConfigFile::readOptions()
{
    QFile file(this->path);
    qDebug() << this->path;
    ConfigOption opt;

    QString line;
    if ( file.open(QIODevice::ReadOnly) ) {
      // file opened successfully
      QTextStream t( &file );        // use a text stream
      // until end of file...
      while ( !t.atEnd() ) {
        // read and parse the command line
        line = t.readLine();         // line of text excluding '\n'
        if (line[0] == '[') {
            // catch [title]
            this->title = line;
        } else if (line[0] == '#') {
            // catch comment/ description
            opt.appendDesc(line.right(line.length()-2));
        } else if (line[0].isLetter()) {
            // catch real option
            QStringList pair = line.split('=');
            opt.setKey(pair[0]);
            opt.setValue(pair[1]);
            this->options.append(opt);
            // start a new option
            opt = ConfigOption();
        } else if (line == "") {
            // ok
        } else {
            qDebug() << "weird stuff in configFile";
        }

        // do something with the line
        qDebug() << "raw"<< line;
      }
      // Close the file
      file.close();
    }


}
