#include "greetpage.h"

GreetPage::GreetPage(QWidget* parent = 0) : NoteUnit(parent, "Getting Started")
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

    title->layout()->addWidget(app_img);
    title->layout()->addWidget(app_name);

    return title;
}

QWidget* GreetPage::constructRecent()
{
    QWidget* recent;

    recent = new QWidget (this);

    return recent;
}
