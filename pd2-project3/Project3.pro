#-------------------------------------------------
#
# Project created by QtCreator 2015-06-27T02:56:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    buttonclick.cpp \
    special.cpp \
    horizontalline.cpp \
    newgame.cpp \
    basic.cpp \
    verticalline.cpp \
    bomb.cpp \
    star.cpp

HEADERS  += mainwindow.h \
    buttonclick.h \
    special.h \
    horizontalline.h \
    newgame.h \
    basic.h \
    verticalline.h \
    bomb.h \
    star.h

FORMS    += mainwindow.ui

RESOURCES += \
    pics.qrc
