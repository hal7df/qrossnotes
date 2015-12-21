#include "greetpage.h"
#include <iostream>

GreetPage::GreetPage(QWidget* parent) : NoteUnit(parent, "Getting Started")
{
    layout()->addWidget(constructTitle());
    layout()->addWidget(constructRecent());
    sizeWidgets();
}

void GreetPage::sizeWidgets()
{
    QWidget* buf;
    for (int i = 0; i < layout()->count(); i++)
    {
        if (buf = dynamic_cast<QWidget*>(layout()->itemAt(i)))
            buf->show();
    }
}

QWidget* GreetPage::constructTitle()
{
    QWidget* title;
    QString nameStr;
    QLabel* app_img;
    QLabel* app_name;

    title = new QWidget (this);

    nameStr = QString("<b>QrossNotes ").append(qApp->applicationVersion());
    nameStr.append("</b>");

    app_name = new QLabel(nameStr, this);
    app_img = new QLabel(this);
    app_img->setPixmap(QPixmap(QString(":/icons/application/icon48.png")));

    title->setLayout(new QHBoxLayout);

    title->layout()->addWidget(app_img);
    title->layout()->addWidget(app_name);

    /*
    int newH;

    if (size().height() > 100)
        newH = (size().height())/5;
    else
        newH = 50;

    title->resize(title->size().width(), newH);

    std::cout << "Width: " << title->size().width() << std::endl << "Height: " << title->size().width() << std::endl;
    */
    return title;
}

QWidget* GreetPage::constructRecent()
{
    QWidget* recent;

    recent = new QWidget (this);

    return recent;
}
