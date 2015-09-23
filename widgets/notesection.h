#ifndef NOTESECTION_H
#define NOTESECTION_H

#include <QtWidgets>
#include "notepath.h"

class NoteSection : public QGroupBox, public NotePath
{
public:
    NoteSection(QString title, QWidget* parent=0);
};

#endif // NOTESECTION_H
