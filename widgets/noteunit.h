#ifndef NOTEUNIT_H
#define NOTEUNIT_H

#include <QVector>
#include <QtWidgets>
#include "notesection.h"
#include "notepath.h"

class NoteUnit : public NotePath
{
    Q_OBJECT
public:
    explicit NoteUnit(NotePath *parent = 0);
    NoteUnit(QWidget *parent, QString name);
    virtual ~NoteUnit();

    void setUnitName(QString name);

    void appendChild(QWidget* child);
    NoteSection* newSection(QString title);

    QWidget* getChildAtIndex(int index) const { return m_layout->itemAt(index)->widget(); }

signals:

public slots:

private:
    QString m_unitName;
    QVector<QWidget> m_children;

    QVBoxLayout* m_layout;
};

#endif // NOTEUNIT_H
