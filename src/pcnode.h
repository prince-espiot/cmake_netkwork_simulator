#ifndef PCNODE_H
#define PCNODE_H

#include <QGraphicsItem>
#include <QPainter>
//#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QGraphicsRectItem>



class pcnode: public QGraphicsItem
{

public:

  pcnode(const QString&);
  const QString& gettext();

  //QPixmap pixmap () const;

  QRectF  boundingRect() const;


 void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
  bool pressed;
protected:
  void mousePressEvent(QGraphicsSceneMouseEvent *event);
  void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
private:
   //QGraphicsRectItem *rect;
  QString text_;
  //QList<RectText> rectText_;
};

#endif // PCNODE_H
