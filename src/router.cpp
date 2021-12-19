#include "router.h"

/*router::router(QObject *parent) : QObject(parent)
{

}*/
router::router(const QString& text):text_(text)
{

  pressed = false;

  setFlag(ItemIsMovable);


}

const QString& router::gettext()
{
  return text_;

}

/*QPixmap pcnode::pixmap() const
{
  return QPixmap(":/imgs/Resources/pc.png ");
}*/

QRectF router::boundingRect() const
{
  return QRectF (0,0,100,100);

}

void router::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget=0) //WILL USE OR NOT
{
  QRectF rec = boundingRect();
  QBrush brush (Qt::transparent);
  if (pressed){
    brush.setColor(Qt::yellow);
}  QGraphicsTextItem tt (text_);
  painter->fillRect(rec,brush);
  painter->drawText(rec,ItemIsMovable,text_);
  painter->drawEllipse(rec);
  //rectText_ << {rec,text_};
}

void router::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
  pressed = true;
  update();
  QGraphicsItem::mousePressEvent(event);

}

void router::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
  pressed = false;
  update();
  QGraphicsItem::mousePressEvent(event);
}
