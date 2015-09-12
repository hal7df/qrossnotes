#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent* event) Q_DECL_OVERRIDE;

private slots:
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
    void selectAll();

    void about();

private:
    void createActions();
    void createMenus();
    void createToolbars();

    Ui::MainWindow *ui;

    // FILE ACTIONS
    QAction* act_new;
    QAction* act_open;
    QAction* act_save;
    QAction* act_saveAs;
    QAction* act_close;
    QAction* act_quit;

    //EDIT ACTIONS
    QAction* act_undo;
    QAction* act_redo;
    QAction* act_copy;
    QAction* act_cut;
    QAction* act_paste;
    QAction* act_selAll;

    //HELP ACTIONS
    QAction* act_about;
    QAction* act_aboutQt;

    //MENUS
    QMenu* menu_file;
    QMenu* menu_edit;
    QMenu* menu_help;

    //TOOLBARS
    QToolBar* tb_main;
    QToolBar* tb_edit;

    QString m_curFile;
};

#endif // MAINWINDOW_H
