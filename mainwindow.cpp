#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    m_settings = new QSettings(this);
    w_tabs = new NoteTabs(this);

    sizeWindow();

    createActions();
    createMenus();
    createToolbars();
    createStatusBar();
    setupInitialTabs();

    setCentralWidget(w_tabs);

    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(closeCleanup()));

    setWindowIcon(QIcon(":/icons/application/icon48.png"));
}

MainWindow::~MainWindow()
{

}

void MainWindow::closeEvent(QCloseEvent* event)
{
    m_settings->setValue("geom/winsize", size());
    event->accept();
}

void MainWindow::closeCleanup()
{
    m_settings->setValue("geom/winsize", size());\
}

void MainWindow::newNote()
{

}

void MainWindow::openNote()
{

}

void MainWindow::saveNote()
{

}

void MainWindow::saveNoteAs()
{

}

void MainWindow::closeNote()
{

}

void MainWindow::undo()
{

}

void MainWindow::redo()
{

}

void MainWindow::copy()
{

}

void MainWindow::cut()
{

}

void MainWindow::paste()
{

}

void MainWindow::selectAll()
{

}

void MainWindow::about()
{
    QString aboutText;

    aboutText = "<big><b>QrossNotes ";
    aboutText.append(qApp->applicationVersion());
    aboutText.append("</b></big><p>&#169; 2015 Paul Bonnen</p>");
    aboutText.append("<p>Rethink how you take notes</p>");
    aboutText.append("<p>QrossNotes is distributed in the hope that it will be useful,");
    aboutText.append(" but WITHOUT ANY WARRANTY; without even the implied warranty of ");
    aboutText.append("MERCHANTIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See ");
    aboutText.append("<a href='http://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#section11'>");
    aboutText.append("section 11</a> of the ");
    aboutText.append("<a href='http://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html'>");
    aboutText.append("GNU General Public License</a> for more details.");

    QMessageBox::about(this, "About QrossNotes", tr(aboutText.toStdString().c_str()));
}

void MainWindow::sizeWindow()
{
    resize(m_settings->value("geom/winsize", QSize(600,400)).toSize());

    setMinimumHeight(200);
    setMinimumWidth(400);
}

void MainWindow::createActions()
{
    act_new = new QAction(tr("&New note set"), this);
    act_new->setStatusTip("Create a new note set");
    act_new->setShortcut(QKeySequence::New);
    act_new->setIcon(QIcon::fromTheme("document-new"));
    connect(act_new, SIGNAL(triggered()), this, SLOT(newNote()));

    act_open = new QAction(tr("&Open note set"), this);
    act_open->setStatusTip("Open a new note set from file");
    act_open->setShortcut(QKeySequence::Open);
    act_open->setIcon(QIcon::fromTheme("document-open"));
    connect(act_open, SIGNAL(triggered()), this, SLOT(openNote()));

    act_save = new QAction(tr("&Save note set"), this);
    act_save->setStatusTip("Save the note set");
    act_save->setShortcut(QKeySequence::Save);
    act_save->setIcon(QIcon::fromTheme("document-save"));
    connect(act_save, SIGNAL(triggered()), this, SLOT(saveNote()));

    act_saveAs = new QAction(tr("Save note set &as"), this);
    act_saveAs->setStatusTip("Save the note set to a specific file");
    act_saveAs->setShortcut(QKeySequence::SaveAs);
    act_saveAs->setIcon(QIcon::fromTheme("document-save-as"));
    connect(act_saveAs, SIGNAL(triggered()), this, SLOT(saveNoteAs()));

    act_close = new QAction(tr("&Close note set"), this);
    act_close->setStatusTip("Close the open note set");
    act_close->setShortcut(QKeySequence::Close);
    act_close->setIcon(QIcon::fromTheme("document-close"));
    connect(act_close, SIGNAL(triggered()), this, SLOT(closeNote()));

    act_quit = new QAction(tr("&Quit"), this);
    act_quit->setStatusTip("Quit QrossNotes");
    act_quit->setShortcut(QKeySequence::Quit);
    act_quit->setIcon(QIcon::fromTheme("application-exit"));
    connect(act_quit, SIGNAL(triggered()), qApp, SLOT(quit()));

    act_undo = new QAction(tr("&Undo"), this);
    act_undo->setStatusTip("Undo the last action");
    act_undo->setShortcut(QKeySequence::Undo);
    act_undo->setIcon(QIcon::fromTheme("edit-undo"));
    connect(act_undo, SIGNAL(triggered()), this, SLOT(undo()));

    act_redo = new QAction(tr("&Redo"), this);
    act_redo->setStatusTip("Redo the last action");
    act_redo->setShortcut(QKeySequence::Redo);
    act_redo->setIcon(QIcon::fromTheme("edit-redo"));
    connect(act_redo, SIGNAL(triggered()), this, SLOT(redo()));

    act_copy = new QAction(tr("&Copy"), this);
    act_copy->setStatusTip("Copy selection");
    act_copy->setShortcut(QKeySequence::Copy);
    act_copy->setIcon(QIcon::fromTheme("edit-copy"));
    connect(act_copy, SIGNAL(triggered()), this, SLOT(copy()));

    act_cut = new QAction(tr("Cu&t"), this);
    act_cut->setStatusTip("Cut selection");
    act_cut->setShortcut(QKeySequence::Cut);
    act_cut->setIcon(QIcon::fromTheme("edit-cut"));
    connect(act_cut, SIGNAL(triggered()), this, SLOT(cut()));

    act_paste = new QAction(tr("&Paste"), this);
    act_paste->setStatusTip("Paste");
    act_paste->setShortcut(QKeySequence::Paste);
    act_paste->setIcon(QIcon::fromTheme("edit-paste"));
    connect(act_cut, SIGNAL(triggered()), this, SLOT(paste()));

    act_selAll = new QAction(tr("&Select all"), this);
    act_selAll->setStatusTip("Select all content in the active context");
    act_selAll->setShortcut(QKeySequence::SelectAll);
    act_selAll->setIcon(QIcon::fromTheme("edit-select-all"));
    connect(act_selAll, SIGNAL(triggered()), this, SLOT(selectAll()));

    act_about = new QAction(tr("&About"), this);
    act_about->setStatusTip("About QrossNotes");
    act_about->setIcon(QIcon::fromTheme("help-about"));
    connect(act_about, SIGNAL(triggered()), this, SLOT(about()));

    act_aboutQt = new QAction(tr("About &Qt"), this);
    act_aboutQt->setStatusTip("About the Qt platform");
    connect(act_aboutQt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt()));
}

void MainWindow::createMenus()
{
    menu_file = menuBar()->addMenu("&File");
    menu_file->addAction(act_new);
    menu_file->addAction(act_open);
    menu_file->addAction(act_save);
    menu_file->addAction(act_saveAs);
    menu_file->addSeparator();
    menu_file->addAction(act_close);
    menu_file->addAction(act_quit);

    menu_edit = menuBar()->addMenu("&Edit");
    menu_edit->addAction(act_undo);
    menu_edit->addAction(act_redo);
    menu_edit->addSeparator();
    menu_edit->addAction(act_copy);
    menu_edit->addAction(act_cut);
    menu_edit->addAction(act_paste);
    menu_edit->addSeparator();
    menu_edit->addAction(act_selAll);

    menu_help = menuBar()->addMenu("&Help");
    menu_help->addAction(act_about);
    menu_help->addAction(act_aboutQt);
}

void MainWindow::createToolbars()
{
    tb_main = addToolBar("Main");
    tb_main->addAction(act_new);
    tb_main->addAction(act_open);
    tb_main->addAction(act_save);
    tb_main->addSeparator();
    tb_main->addAction(act_undo);
    tb_main->addAction(act_redo);
    tb_main->addSeparator();
    tb_main->addAction(act_copy);
    tb_main->addAction(act_cut);
    tb_main->addAction(act_paste);
}

void MainWindow::createStatusBar()
{
    setStatusBar(new QStatusBar(this));
}

void MainWindow::setupInitialTabs()
{
    GreetPage* initPage;

    initPage = new GreetPage(this);

    w_tabs->addTab(initPage, initPage->getPathName());
}
