#ifndef NOTEUNIT_H
#define NOTEUNIT_H

#include <QWidget>

class NoteUnit : public QWidget
{
    Q_OBJECT
public:
    explicit NoteUnit(QWidget *parent = 0);
    NoteUnit(QWidget *parent, QString name);
    virtual ~NoteUnit();

    void setUnitName(QString name);
    void appendChild(QWidget* child);
    void appendChild();

signals:

public slots:

private:
    QString m_unitName;
};

#endif // NOTEUNIT_H
