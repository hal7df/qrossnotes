#ifndef NOTESECTION_H
#define NOTESECTION_H

#include <QtWidgets>
#include "notepath.h"

class NoteSection : public NotePath
{
public:
    explicit NoteSection(NotePath* parent = 0);
    NoteSection(NotePath* parent = 0, QString name = "");

private:
    QBoxLayout* m_layout;
    QGroupBox* w_main;
};

#endif // NOTESECTION_H
