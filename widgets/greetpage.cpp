#include "greetpage.h"

GreetPage::GreetPage(QWidget* parent) : NoteUnit(parent, "Getting Started")
{
    layout()->addWidget(constructTitle());
    layout()->addWidget(constructRecent());
}

QWidget* GreetPage::constructTitle()
{
    QWidget* title;
    QString nameStr;
    QLabel app_img;
    QLabel app_name;

    title = new QWidget (this);

    nameStr = QString("<b>QrossNotes ").append(qApp->applicationVersion());
    nameStr.append("</b>");

    app_name.setText(nameStr);
    app_img.setPixmap(QPixmap(":/icons/application/icon48.png"));

    title->setLayout(new QHBoxLayout(title));

    title->layout()->addWidget(&app_img);
    title->layout()->addWidget(&app_name);

    int newH;

    if (size().height() > 100)
        newH = (size().height())/5;
    else
        newH = 50;

    title->resize(title->size().width(), newH);

    return title;
}

QWidget* GreetPage::constructRecent()
{
    QWidget* recent;

    recent = new QWidget (this);

    return recent;
}
