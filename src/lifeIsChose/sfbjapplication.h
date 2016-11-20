#ifndef SFBJAPPLICATION_H
#define SFBJAPPLICATION_H

#include <QQuickView>

class sfbjapplication : public  QObject
{
public:
    sfbjapplication();
    ~sfbjapplication();
    
    bool init();
    bool start();
    void stop();
    int initView(QString &name);
    
private:
    QQuickView view;
};

#endif // SFBJAPPLICATION_H
