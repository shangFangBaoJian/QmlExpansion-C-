#include "contextview.h"
#include <QDebug>
contextview::contextview(QObject *parent) : QObject(parent)
{
    
}

QVariant contextview::invoke(const  QString &str,const QVariant &vokemap)
{

    qDebug() << "str:" << str << "vokemap:" << vokemap;
    emit change();
    return 0;
}

QVariantMap &contextview::filds()
{
    return mmap;
}

void contextview::qmlWrite(const QVariantMap &map)
{
    mmap  = map;
    emit change();

}
