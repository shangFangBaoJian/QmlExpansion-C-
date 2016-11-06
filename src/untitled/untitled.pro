#-------------------------------------------------
#
# Project created by QtCreator 2016-11-06T14:30:06
#
#-------------------------------------------------

QT += core gui widgets xml qml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#构建路径
OBJECTS_DIR=../../build/$$TARGET/obj
MOC_DIR=../../build/$$TARGET/moc


#可执行文件路径
DESTDIR += ../../bin


TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h
