#include "inifile.h"

inifile::inifile(QObject *parent) : QObject(parent)
{
    
}

QString inifile::readIni(QString &fileName)
{
    if(fileName.compare("")  == 0 )
    {
        qDebug() << "ini file init failed" ;
    }
    
    QSettings *configIni = new QSettings("SFBJ.ini",QSettings::IniFormat);
    QString groupName = configIni->value("/view").toString();
    QString groupConfig = configIni->value("/view/name").toString();
     
    qDebug()<<"groupName:" <<groupName <<endl <<"groupConfig:" <<groupConfig<<endl;
    delete configIni;
    return groupName;
}
