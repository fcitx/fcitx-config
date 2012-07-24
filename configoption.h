#ifndef CONFIGOPTION_H
#define CONFIGOPTION_H

#include <QString>
#include <QStringList>

class ConfigOption
{
public:
    ConfigOption();
    void print();
    void setKey(QString key);
    void setValue(QString value);
    QString getKey();
    QString getValue();
    void appendDesc(QString desc);
    QString dump();
private:
    QString key;
    QString value;
    QStringList description;
};

#endif // CONFIGOPTION_H
