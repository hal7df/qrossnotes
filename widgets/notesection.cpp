#include "notesection.h"

NoteSection::NoteSection(NotePath* parent)
    : NotePath(parent)
{
    m_layout = new QBoxLayout(QBoxLayout::LeftToRight, this);
    w_main = new QGroupBox(getPathName(), this);

    m_layout->addWidget(w_main);
    setLayout(m_layout);
}

NoteSection::NoteSection(NotePath *parent, QString name)
    : NotePath(parent)
{
    setPathName(name);

    m_layout = new QBoxLayout(QBoxLayout::LeftToRight, this);
    w_main = new QGroupBox(name, this);

    m_layout->addWidget(w_main);
    setLayout(m_layout);
}
