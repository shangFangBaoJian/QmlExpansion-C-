#-------------------------------------------------
#
# Project created by QtCreator 2016-11-05T01:46:46
#
#-------------------------------------------------

QT += core gui widgets xml qml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#构建路径
OBJECTS_DIR=../../build/$$TARGET/obj
MOC_DIR=../../build/$$TARGET/moc


#可执行文件路径
DESTDIR += ../../bin
TARGET = lifeIsChose

TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h
