#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>

#include "projectwindow.h"
#include "viewerwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    void buildUI();
    void buildMainMenu();
    void buildDocks();

    QMenuBar * menuBar = NULL;

    ProjectWindow * projectWindow = NULL;
    ViewerWindow  * viewerWindow  = NULL;
};

#endif // MAINWINDOW_H
