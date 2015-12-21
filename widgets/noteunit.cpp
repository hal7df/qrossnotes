#include "noteunit.h"

NoteUnit::NoteUnit(QWidget *parent) : NotePath(parent)
{
    m_layout = new QVBoxLayout;

    setLayout(m_layout);
}

NoteUnit::NoteUnit(QWidget *parent, QString name) : NotePath(parent)
{
    setPathName(name);

    m_layout = new QVBoxLayout;

    setLayout(m_layout);
}

NoteUnit::~NoteUnit()
{

}

/** UNIT CONFIG **/
QString NoteUnit::setUnitName(QString name)
{
    return setPathName(name);
}

/** OBJECT MANAGEMENT **/
QWidget* NoteUnit::appendChild(QWidget *child)
{
    m_layout->addWidget(child);
    return child;
}

NoteSection* NoteUnit::newSection(QString title)
{
    NoteSection* new_ns;

    new_ns = new NoteSection (this, title);

    m_layout->addWidget(new_ns);

    return new_ns;
}
