#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QString>
#include "pcnode.h"
#include "router.h"

//#include <QGraphicsPixmapItem>

namespace Ui {
  class Dialog;
}

class Dialog : public QDialog
{
  Q_OBJECT

public:
  explicit Dialog(QWidget *parent = nullptr);
  ~Dialog();


private slots:
  void on_Btn_Preview_dialog_clicked();

  void on_Btn_Cancel_dialog_clicked();

private:
  Ui::Dialog *ui;
   QGraphicsScene *scene;
   //QGraphicsRectItem *rect;
   pcnode *pc;
   router *rout;
};

#endif // DIALOG_H
