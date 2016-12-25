#include <QApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QWindow>
#include <QQuickView>
#include <QQuickWindow>
#include <QSqlDatabase>
#include <QDebug>

#include <sfbjapplication.h>
#include "../kernel/application/contextview.h"
#include <QQmlContext>
#include <QString>


using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    a.setWindowIcon(QIcon("picture/v7.ico"));
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QSqlDatabase db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setDatabaseName("database.db");
    if(!db.open())
    {
        qDebug() << "数据库不能打开" ;
    }


    sfbjapplication sfbjapp;
    sfbjapp.initIni("SFBJ.ini");



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


//    ert.qmlWrite(mapp);

    return a.exec();
}
