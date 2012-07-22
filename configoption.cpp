#include "configoption.h"
#include <QDebug>

/*
 * configfile has many configoption
 * an option has: description, optionKey, optionValue
 *
 */

ConfigOption::ConfigOption()
{
}

void ConfigOption::print() {
    qDebug() << "option: " << this->key << this->value;
    for(int i = 0; i< this->description.length(); i++) {
        qDebug() << "comment: " << this->description[i];
    }
    qDebug();
}

void ConfigOption::setKey(QString key) {
    this->key = key;
}

void ConfigOption::setValue(QString value) {
    this->value = value;
}

void ConfigOption::appendDesc(QString desc) {
    this->description.append(desc);
}


QString ConfigOption::dump() {
    QString output;
    for(int i = 0; i < this->description.length(); i++) {
        output += "# " + this->description[i] + "\n";
    }
    output += this->key + "=" + this->value + "\n";
    return output;
}
