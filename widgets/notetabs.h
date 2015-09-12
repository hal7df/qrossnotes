#ifndef NOTETABS_H
#define NOTETABS_H

#include <QtWidgets>

class NoteTabs : public QTabWidget
{
    Q_OBJECT

public:
    NoteTabs(QWidget* parent=0);
    ~NoteTabs();
};

#endif // NOTETABS_H
