#-------------------------------------------------
#
# Project created by QtCreator 2016-11-05T01:46:46
#
#-------------------------------------------------

QT += core gui widgets xml qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DESTDIR +=../bin
#DESTDIR +=./bin
TARGET = lifeIsChose

TEMPLATE = app

SOURCES += main.cpp

#include(deployment.pri)


#加载图标文件
RC_FILE  = logo.rc

HEADERS  +=

DISTFILES += \
    logo.rc \
    views/SFBJ.qml


