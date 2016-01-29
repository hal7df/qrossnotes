#include "greetpage.h"
#include <iostream>

GreetPage::GreetPage(QWidget* parent) : TabBase(parent, "Getting Started")
{
    m_layout->addWidget(constructTitle(), 1);
    m_layout->addWidget(constructRecent(), 5);
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
    QFont nameFont;
    QHBoxLayout* titleLayout;

    title = new QWidget (this);

    nameStr = QString("QrossNotes ").append(qApp->applicationVersion());

    app_name = new QLabel(nameStr, this);
    app_img = new QLabel(this);
    app_img->setPixmap(QPixmap(QString(":/icons/application/icon64.png")));

    nameFont = app_name->font();
    nameFont.setPointSize(24);
    nameFont.setBold(true);
    app_name->setFont(nameFont);

    titleLayout = new QHBoxLayout;

    titleLayout->addWidget(app_img, 1);
    titleLayout->addWidget(app_name, 3);

    title->setLayout(titleLayout);

    return title;
}

QWidget* GreetPage::constructRecent()
{
    QWidget* recent;
    QPushButton* createNew;

    recent = new QWidget (this);
    recent->setLayout(new QVBoxLayout);

    createNew = new QPushButton(QIcon::fromTheme("document-new"), "New note set", recent);

    return recent;
}
