#ifndef VIEWERWINDOW_H
#define VIEWERWINDOW_H

#include <QDockWidget>
#include <opencv2/viz.hpp>

class ViewerWindow : public QDockWidget
{
    Q_OBJECT
public:
    ViewerWindow(QWidget *parent = 0);
    ~ViewerWindow();

private:
    cv::viz::Viz3d * viewer = NULL;
};

#endif // VIEWERWINDOW_H
