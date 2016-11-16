#ifndef SFBJAPPLICATION_H
#define SFBJAPPLICATION_H

#include <QObject>

class SFBJApplication : public QObject
{
    Q_OBJECT
public:
    explicit SFBJApplication(QObject *parent = 0);

signals:

public slots:
};

#endif // SFBJAPPLICATION_H