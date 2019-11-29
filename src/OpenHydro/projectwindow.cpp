#include "projectwindow.h"

ProjectWindow::ProjectWindow(QWidget *parent) : QDockWidget(tr("Project"),parent)
{
    files = new QListView(this);
    files->setEditTriggers(QAbstractItemView::NoEditTriggers);
    files->setSelectionMode(QAbstractItemView::SingleSelection);

    model = new QStringListModel(this);
    files->setModel(model);

    //TODO: connect(files->selectionModel(),&QItemSelectionModel::selectionChanged,(MainWindow*)parent,&MainWindow::fileSelected );


    this->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    this->setWidget(files);
    this->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetFloatable);
    this->show();
}
