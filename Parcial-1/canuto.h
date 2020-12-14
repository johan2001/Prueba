#ifndef CANUTO_H
#define CANUTO_H


#include "Librerias.h"


class Canuto : public QObject, public QGraphicsItem
{
    Q_OBJECT

private:
    unsigned short Ancho,Alto;
    int PosX , PosY;
    QString Direccion;
    QPixmap *pixmap;
public:

    Canuto(int x, int y,QString direcion, QObject *parent = nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ Canuto() ;
};


#endif // CANUTO_H
