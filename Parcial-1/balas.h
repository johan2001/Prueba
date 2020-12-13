#ifndef BALAS_H
#define BALAS_H

#include "Librerias.h"


class Balas : public QObject, public QGraphicsItem
{
    Q_OBJECT
private:
    unsigned short Radio,Ancho,Alto;
    int PosX , PosY;
    QPixmap *pixmap;
public:

    Balas(int x, int y, QObject *parent = nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ Balas() ;
};

#endif // BALAS_H
