#include "contextview.h"
#include <QDebug>
contextview::contextview(QObject *parent) : QObject(parent)
{
    /**
     *  @author sfbj
     *  @ 在主程序中的测试文件 ，放在main中可运行
     */
    /**
    contextview ert;
    QQuickView view;
    QVariantMap mapp;
    mapp["1"] = "330000";

    mapp["3"] = "red";
    ert.qmlWrite(mapp);
//    ert.setProperty("rt",true);
    view.rootContext()->setContextProperty("jj",&ert);


    view.setSource(QUrl::fromLocalFile("./views/coding/SFBJView.qml"));

    view.show();
    mapp["3"] = "#330000";
    ert.qmlWrite(mapp);
    **/

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
