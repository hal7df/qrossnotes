#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setApplicationDisplayName("QrossNotes");
    a.setApplicationName("QrossNotes");
    a.setOrganizationDomain("org");
    a.setOrganizationName("monarq");
    a.setApplicationVersion(APP_VERSION);
    MainWindow w;
    w.show();

    return a.exec();
}
