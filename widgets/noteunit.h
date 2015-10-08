#ifndef NOTEUNIT_H
#define NOTEUNIT_H

#include <QtWidgets>
#include "notesection.h"
#include "notepath.h"

class NoteUnit : public NotePath
{
    Q_OBJECT
public:
    explicit NoteUnit(QWidget *parent = 0);
    NoteUnit(QWidget *parent, QString name);
    virtual ~NoteUnit();

    QString setUnitName(QString name);

    QWidget* appendChild(QWidget* child);
    NoteSection* newSection(QString title);

    QWidget* getChildAtIndex(int index) const { return m_layout->itemAt(index)->widget(); }

signals:

public slots:

private:
    QVBoxLayout* m_layout;
};

#endif // NOTEUNIT_H
