#ifndef NOTEPATH_H
#define NOTEPATH_H

#include <QWidget>

class NotePath : public QWidget
{
    Q_OBJECT
public:
    explicit NotePath(QWidget *parent = 0);

    QString getFullPath();
    QString getPathName();

    QString setPathName(QString newName);

signals:

public slots:

private:
    QString m_parentPath;
    QString m_objName;
};

#endif // NOTEPATH_H
