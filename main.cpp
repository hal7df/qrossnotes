#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

#ifndef Q_OS_LINUX
    QIcon::setThemeName("oxygen");
#endif

    a.setApplicationDisplayName("QrossNotes");
    a.setApplicationName("QrossNotes");
    a.setOrganizationDomain("org");
    a.setOrganizationName("monarq");
    a.setApplicationVersion(APP_VERSION);

    MainWindow w;
    w.show();

    return a.exec();
}
