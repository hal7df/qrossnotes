#ifndef NOTESECTION_H
#define NOTESECTION_H

#include <QtWidgets>

class NoteSection : public QGroupBox
{
public:
    NoteSection(QString title, QObject* parent=0);
};

#endif // NOTESECTION_H
