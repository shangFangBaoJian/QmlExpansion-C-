#ifndef INIFILE_H
#define INIFILE_H

#include <QDebug>
#include <QObject>
#include <QSettings>

class inifile : public QObject
{
    Q_OBJECT
public:
    explicit inifile(QObject *parent = 0);
    
    QString readIni(QString &fileName);
    QString writeIni(QString &fileName,QString &groupName,QString &groupConfig);
    
signals:
    
public slots:
};

#endif // INIFILE_H
