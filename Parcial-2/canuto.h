#ifndef CANUTO_H
#define CANUTO_H


#include "Librerias.h"


class Canuto : public QObject, public QGraphicsItem
{
    Q_OBJECT

private:
    int PosX , PosY, Ancho,Alto;
    QString Direccion;
    QPixmap *pixmap;
public:

    Canuto(int x, int y,QString direcion, QObject *parent = nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ Canuto() ;
    //Metodo Get
    int get_Pos_X();
    int get_Pos_Y();
    int get_Ancho();
    int get_Alto();

    //Metodos Set
};


#endif // CANUTO_H
