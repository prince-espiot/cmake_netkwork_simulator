#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_actionNew_triggered()
{
  dialog = new Dialog(this);
  dialog->show();
}


void MainWindow::on_on_actionNew_Window_triggered_clicked()
{
  dialog = new Dialog(this);
  dialog->show();
}




