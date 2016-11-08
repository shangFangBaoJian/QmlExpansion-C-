#include <QApplication>
#include <QGuiApplication>
#include<QQmlApplicationEngine>
#include<QWindow>
#include <QQuickView>
#include <QQuickWindow>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("picture/v7.ico"));

    QQuickView view ;
    view.setSource(QUrl::fromLocalFile("views/SFBJ.qml"));
    view.show();



    return a.exec();
}
