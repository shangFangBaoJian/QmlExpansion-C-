#-------------------------------------------------
#
# Project created by QtCreator 2016-11-05T01:46:46
#
#-------------------------------------------------

QT += core gui widgets xml qml quick sql

#include(deployment.pri)

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

!include(../kernel/utils.pri){
      error("this is failed of path")
}

CONFIG += c++11

DESTDIR +=../bin
#DESTDIR +=./bin
TARGET = lifeIsChose

OBJECTS_DIR=../build/$$TARGET/obj
MOC_DIR=../build/$$TARGET/moc

TEMPLATE = app

#加载图标文件
RC_FILE  = logo.rc

HEADERS  += \
    sfbjapplication.h \
    interface/widget_demo1/mywidget.h \
    interface/dialog_demo1/mydialog.h

SOURCES += main.cpp \
    sfbjapplication.cpp \
    interface/widget_demo1/mywidget.cpp \
    interface/dialog_demo1/mydialog.cpp

DISTFILES += \
    logo.rc \
    config/SFBJ.ini \
    views/coding/SFBJ.qml \
    views/coding/SFBJBottomer.qml \
    views/coding/SFBJHeader.qml \
    views/coding/SFBJVerticalCenter.qml \
    views/coding/SFBJView.qml \
    views/coding/Test.qml \
    views/model/SFBJButton.qml \
    views/images/renlian.gif

RESOURCES +=


