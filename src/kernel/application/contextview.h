#ifndef CONTEXTVIEW_H
#define CONTEXTVIEW_H
#include <QVariantMap>
#include <QObject>

class contextview : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariantMap filds READ filds WRITE qmlWrite NOTIFY change)
public:
    explicit contextview(QObject *parent = 0);
    
    Q_INVOKABLE QVariant invoke(const QString &str,const QVariant &vokemap);

    QVariantMap &filds();
    void qmlWrite(const QVariantMap &map);
signals:
    void change();

public slots:

private:
    QVariantMap mmap;
};

#endif // CONTEXTVIEW_H
