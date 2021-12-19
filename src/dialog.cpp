#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
{
  ui->setupUi(this);
  ui->comboBox->addItem("PC");
  ui->comboBox->addItem("Router");

//QIcon(":/imgs/Resources/router.png "),
}

Dialog::~Dialog()
{
  delete ui;
}

void Dialog::on_Btn_Preview_dialog_clicked()
{
  scene = new QGraphicsScene(this);  //this
  ui->graphicsView->setScene(scene);
   //pc =  new pcnode();
  //add text to scene.
  QString text = ui->textEdit->toPlainText();
  QString textbox = ui->comboBox->currentText();
  if(textbox.compare("PC") == 0){
  pc = new pcnode(text);
  //scene->addItem(pc);

 //scene->addText(pc->gettext(ui->textEdit->toPlainText()));
  //rect = scene->addRect(pc->boundingRect());
  //pc = new QGraphicsPixmapItem();
  //pc->setPixmap(QPixmap(":/imgs/Resources/pc.png "));
  scene->addItem(pc);

    //Dialog *dialog = new Dialog(this);
    //QString text = ui->textEdit->toPlainText();
    // ui->textEdit->setText(text);
      //accept();

    //QMessageBox::information(this,"Created",ui->comboBox->currentText());
    }
  else {
      rout = new router(text);
      scene->addItem(rout);
    }

}


void Dialog::on_Btn_Cancel_dialog_clicked()
{
  accept();
}

