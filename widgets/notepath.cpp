#include "notepath.h"

NotePath::NotePath(QWidget *parent) : QWidget(parent)
{
    if (NotePath* chk = dynamic_cast<NotePath*>(parent))
        m_parentPath = chk->getFullPath();
    else
        m_parentPath = "/";

    m_objName = "";
}

QString NotePath::getFullPath()
{
    if (m_objName != "")
        return m_parentPath + m_objName;
    else
        return QString("\\noName");
}

QString NotePath::getPathName()
{
    return m_objName;
}

QString NotePath::setPathName(QString newName)
{
    return (m_objName = newName);
}
