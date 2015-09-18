#ifndef NOTEPATH_H
#define NOTEPATH_H

#include <QWidget>

class NotePath : public QWidget
{
    Q_OBJECT
public:
    explicit NotePath(QWidget *parent = 0);

    virtual QString getFullPath() = 0;

signals:

public slots:
};

#endif // NOTEPATH_H
