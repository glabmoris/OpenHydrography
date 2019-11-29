#ifndef PROJECTWINDOW_H
#define PROJECTWINDOW_H

#include <QDockWidget>
#include <QListView>
#include <QStringListModel>

class ProjectWindow : public QDockWidget
{
    Q_OBJECT

public:
    explicit ProjectWindow(QWidget *parent = 0);

signals:

public slots:

private:
    QListView * files              = NULL;
    QStringListModel * model       = NULL;
};

#endif // PROJECTWINDOW_H
