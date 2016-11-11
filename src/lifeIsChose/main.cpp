#include <QApplication>
#include <QGuiApplication>
#include<QQmlApplicationEngine>
#include<QWindow>
#include <QQuickView>
#include <QQuickWindow>
#include <QSqlDatabase>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    a.setWindowIcon(QIcon("picture/v7.ico"));
//  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//    QSqlDatabase db  = QSqlDatabase::addDatabase("QSQLITE");
//    db.setHostName("localhost");
//    db.setDatabaseName("database.db");
//    if(!db.open())
//    {
//        qDebug() << "数据库不能打开" ;
//    }

//    QQuickView *view  =  new QQuickView;
//    view->setSource(QUrl(QLatin1String("views/SFBJ.qml")));
//    view->show();
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQuickView view;

//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    view.setSource(QUrl(QLatin1String("qrc:/views/SFBJ.qml")));
    view.show();
    return app.exec();
}
