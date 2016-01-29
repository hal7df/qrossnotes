#include "tabbase.h"

TabBase::TabBase(QWidget *parent) : QWidget(parent)
{
    m_tabName = "Untitled";
    m_layout = new QVBoxLayout;
    setLayout(m_layout);
}

TabBase::TabBase(QWidget *parent, QString name) : QWidget(parent)
{
    m_tabName = name;
    m_layout = new QVBoxLayout;
    setLayout(m_layout);
}

QString TabBase::getTabName() const
{
    return m_tabName;
}

void TabBase::setTabName(QString name)
{
    m_tabName = name;
}
