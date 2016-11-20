#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------
QT += core gui widgets xml qml quick sql

#include(deployment.pri)

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += $$../kernal


SOURCES += \
    $$PWD/communication/sfbjdatabase.cpp \
    $$PWD/iniconfig/inifile.cpp

HEADERS  += \
    $$PWD/communication/sfbjdatabase.h \
    $$PWD/iniconfig/inifile.h
