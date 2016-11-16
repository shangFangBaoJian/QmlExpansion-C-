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
    $$PWD/communication/sfbjdatabase.cpp

HEADERS  += \
    $$PWD/communication/sfbjdatabase.h
