#ifndef GREETPAGE_H
#define GREETPAGE_H

#include "noteunit.h"

class GreetPage : public NoteUnit
{
public:
    explicit GreetPage(QWidget* parent = 0);

private:
    QWidget* constructTitle();
    QWidget* constructRecent();
};

#endif // GREETPAGE_H
