#include "balas.h"


Balas::Balas(int x, int y, QObject *parent) : QObject(parent)
{
    PosX = x;
    PosY = y;
    Radio =10;
    Ancho = 20;
    Alto = 20;
    pixmap = new QPixmap("");// Guardar imagen en una variable


    setPos(PosX,PosY); //Se ubica en la posciosn correspondiente el objeto
}

QRectF Balas::boundingRect() const // Se crea un rectangulo
{
    return QRectF(0,0,Ancho,Alto);
}

void Balas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) // se introduce la imagen en el rectangulo
{
    painter->drawPixmap(boundingRect(),*pixmap,pixmap->rect()); // Se pinta en el rectangulo usando el pixmap
    UNUSED(option);
    UNUSED(widget);
}

Balas::~Balas()
{

}
