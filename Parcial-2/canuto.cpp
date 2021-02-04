#include "canuto.h"

Canuto::Canuto(int x, int y,QString direccion ,QObject *parent) : QObject(parent)
{
    PosX = x;
    PosY = y;
    Ancho = 70;
    Alto = 60;
    Direccion = direccion;
    if (Direccion=="Izquierda"){
        pixmap = new QPixmap(":/Imagenes/cannon-5287088_1280.png");// Guardar imagen en una variable
    }
    if (Direccion=="Derecha"){
        pixmap = new QPixmap(":/Imagenes/cannon-5287088_12802.png");// Guardar imagen en una variable
    }



    setPos(PosX,PosY); //Se ubica en la posciosn correspondiente el objeto
}

QRectF Canuto::boundingRect() const // Se crea un rectangulo
{
    return QRectF(0,0,Ancho,Alto);
}

void Canuto::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) // se introduce la imagen en el rectangulo
{
    painter->drawPixmap(boundingRect(),*pixmap,pixmap->rect()); // Se pinta en el rectangulo usando el pixmap
    UNUSED(option);
    UNUSED(widget);
}

Canuto::~Canuto()
{

}

