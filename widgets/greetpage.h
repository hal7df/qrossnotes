#ifndef GREETPAGE_H
#define GREETPAGE_H

#include "tabbase.h"

class GreetPage : public TabBase
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
