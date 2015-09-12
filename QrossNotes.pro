#-------------------------------------------------
#
# Project created by QtCreator 2015-09-12T10:45:48
#
#-------------------------------------------------

QT       += core gui

VERSION = 0.0

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QrossNotes
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    widgets/notetabs.cpp

HEADERS  += mainwindow.h \
    widgets/notetabs.h

FORMS    +=

DEFINES += APP_VERSION=\\\"$$VERSION\\\"

RESOURCES += \
    icons.qrc
