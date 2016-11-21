#ifndef SFBJAPPLICATION_H
#define SFBJAPPLICATION_H

#include <QQuickView>
#include "../kernel/iniconfig/inifile.h"

class sfbjapplication : public  QObject
{
    Q_OBJECT
public:
    sfbjapplication();
    
    
    bool init();
    bool start();
    void stop();
    int initView(QString &name);
    int initIni(QString iniFileName);
    
private:
    QQuickView view;
    QString inifileName;
    inifile iniFile;
};

#endif // SFBJAPPLICATION_H
