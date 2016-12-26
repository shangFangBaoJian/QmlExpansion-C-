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
#include <QtGui>
#include <QTextCodec>

#include <QWidget>
#include <QLabel>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("picture/v7.ico"));

    sfbjapplication sfbjapp;
    sfbjapp.initIni("SFBJ.ini");

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    QWidget *widget = new QWidget();
    widget->setWindowTitle(QObject::tr("i am widget"));
    QLabel *label = new QLabel();
    label->setWindowTitle(QObject::tr("i am Label"));
    label->setText(QObject::tr("label:i am label"));
    label->resize(180,20);
    QLabel *label2 = new QLabel(widget);
    label2->setText(QObject::tr("label2 donot a XXX"));
    label2->resize(200,50);
    label->show();
    widget->show();
    int ret = a.exec();

    delete label;
    delete widget;
    return ret;
}
