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

#OBJECTS_DIR=../build/$$TARGET/obj
#MOC_DIR=../build/$$TARGET/moc

TEMPLATE = app

#加载图标文件
RC_FILE  = logo.rc

HEADERS  += \
    sfbjapplication.h

SOURCES += main.cpp \
    sfbjapplication.cpp

DISTFILES += \
    logo.rc \
    config/SFBJ.ini

RESOURCES += \
    qml.qrc


