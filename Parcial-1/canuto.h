#ifndef CANUTO_H
#define CANUTO_H


#include "Librerias.h"


class Canuto : public QObject, public QGraphicsItem
{
    Q_OBJECT

private:
    unsigned short Radio,Ancho,Alto;
    int PosX , PosY;
    QPixmap *pixmap;
public:

    Canuto(int x, int y, QObject *parent = nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ Canuto() ;
};


#endif // CANUTO_H
