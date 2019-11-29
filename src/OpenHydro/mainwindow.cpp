#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    buildUI();
}

MainWindow::~MainWindow()
{

}

void MainWindow::buildUI(){
    buildMainMenu();
    buildDocks();

}

void MainWindow::buildMainMenu(){
    menuBar = new QMenuBar();

    //TODO: add menu items

    this->setMenuBar(menuBar);
}

void MainWindow::buildDocks(){
    this->setTabPosition(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea|Qt::BottomDockWidgetArea,QTabWidget::North);

    projectWindow = new ProjectWindow(this);
    this->addDockWidget(Qt::LeftDockWidgetArea,projectWindow);
    //TODO: connect(ui->actionShowProjectWindow,&QAction::triggered,projectWindow,&ProjectWindow::show);


    viewerWindow = new ViewerWindow(this);
    this->setCentralWidget(viewerWindow);
    //TODO: connect(ui->actionShowProjectWindow,&QAction::triggered,projectWindow,&ProjectWindow::show);
}


