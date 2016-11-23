#ifndef CONTEXTVIEW_H
#define CONTEXTVIEW_H

#include <QObject>

class contextview : public QObject
{
    Q_OBJECT
public:
    explicit contextview(QObject *parent = 0);
    
signals:
    
public slots:
};

#endif // CONTEXTVIEW_H