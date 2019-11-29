#include "viewerwindow.h"


ViewerWindow::ViewerWindow(QWidget *parent): QDockWidget(parent)
{
    viewer = new cv::viz::Viz3d("Viewer");

    viewer->

    this->show();
}

ViewerWindow::~ViewerWindow(){

}
