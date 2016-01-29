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
    widgets/greetpage.cpp \
    widgets/tabbase.cpp \
    widgets/noteedit.cpp \
    actionmanager.cpp

HEADERS  += mainwindow.h \
    widgets/greetpage.h \
    widgets/tabbase.h \
    widgets/noteedit.h \
    actionmanager.h

FORMS    +=

DEFINES += APP_VERSION=\\\"$$VERSION\\\"

RESOURCES += \
    icons-minimal.qrc

win32|macx {
RESOURCES += \
    icons.qrc
}
