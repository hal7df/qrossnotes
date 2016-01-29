#ifndef ACTIONMANAGER_H
#define ACTIONMANAGER_H

#include <QtWidgets>
#include <QObject>

class ActionManager: public QObject
{
    Q_OBJECT
public:
    ActionManager(QMainWindow* parent = 0);

    enum QNAction {
        kQuitApp,
        kNewNote,
        kOpenNote,
        kSaveNote,
        kSaveNoteAs,
        kCloseNote,
        kUndo,
        kRedo,
        kCopy,
        kCut,
        kPaste,
        kSelAll,
        kAbout,
        kAboutQt
    };

private slots:
    void quitApp();
    void newNote();
    void openNote();
    void saveNote();
    void saveNoteAs();
    void closeNote();
    void undo();
    void redo();
    void copy();
    void cut();
    void paste();
    void selAll();
    void about();
    void aboutQt();
};

#endif // ACTIONMANAGER_H
