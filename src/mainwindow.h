
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include <QtCore>
#include <QtGui>
#include "pcnode.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_actionNew_triggered();

  void on_on_actionNew_Window_triggered_clicked();

private:
  Ui::MainWindow *ui;
  Dialog *dialog;
  //QGraphicsScene *scene;

};
#endif // MAINWINDOW_H
