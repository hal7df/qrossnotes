#ifndef GREETPAGE_H
#define GREETPAGE_H

#include "noteunit.h"

class GreetPage : public NoteUnit
{
Q_OBJECT
public:
    explicit GreetPage(QWidget* parent = 0);

    void sizeWidgets();

private:
    QWidget* constructTitle();
    QWidget* constructRecent();
};

#endif // GREETPAGE_H
