#include "pcnode.h"

pcnode::pcnode(const QString& text):text_(text)
{

  pressed = false;

  setFlag(ItemIsMovable);


}

const QString& pcnode::gettext()
{
  return text_;

}

/*QPixmap pcnode::pixmap() const
{
  return QPixmap(":/imgs/Resources/pc.png ");
}*/

QRectF pcnode::boundingRect() const
{
  return QRectF (0,0,100,100);

}

void pcnode::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget=0) //WILL USE OR NOT
{
  QRectF rec = boundingRect();
  QBrush brush (Qt::transparent);
  if (pressed){
    brush.setColor(Qt::yellow);
}  QGraphicsTextItem tt (text_);
  painter->fillRect(rec,brush);
  painter->drawText(rec,ItemIsMovable,text_);
  painter->drawRect(rec);
  //rectText_ << {rec,text_};
}

void pcnode::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
  pressed = true;
  update();
  QGraphicsItem::mousePressEvent(event);

}

void pcnode::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
  pressed = false;
  update();
  QGraphicsItem::mousePressEvent(event);
}
