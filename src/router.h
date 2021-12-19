#ifndef ROUTER_H
#define ROUTER_H
#include <QGraphicsItem>
#include <QPainter>
//#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QGraphicsRectItem>
#include <QObject>

class router : public QObject,public QGraphicsItem
{
  Q_OBJECT
public:
 //explicit router(QObject *parent = nullptr);
   router(const QString&);
   const QString& gettext();

   QRectF  boundingRect() const;
   void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool pressed;
  protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
  private:

    QString text_;
//signals:

};

#endif // ROUTER_H
