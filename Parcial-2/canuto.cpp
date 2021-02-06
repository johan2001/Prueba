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
    if(Direccion== "Torre"){
        pixmap = new QPixmap(":/Imagenes/tower-40855_1280.png");// Guardar imagen en una variable
        Ancho =80;
        Alto =200;
    }
    if(Direccion== "Torre2"){
        Ancho =70;
        Alto =120;
        pixmap = new QPixmap(":/Imagenes/tower-40855_1280.png");// Guardar imagen en una variable
    }




    setPos(PosX,PosY); //Se ubica en la posciosn correspondiente el objeto
}

QRectF Canuto::boundingRect() const // Se crea un rectangulo
{
    return QRectF(0,0,Ancho,Alto);
}

void Canuto::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) // se introduce la imagen en el rectangulo
{

    if (Direccion=="Izquierda"){
        painter->setBrush(Qt::yellow);
        painter->drawEllipse(boundingRect().center(),30,30);
    }
    if (Direccion=="Derecha"){
        painter->setBrush(Qt::yellow);
        painter->drawEllipse(boundingRect().center(),30,30);
    }
    painter->drawPixmap(boundingRect(),*pixmap,pixmap->rect()); // Se pinta en el rectangulo usando el pixmap
    UNUSED(option);
    UNUSED(widget);
}
Canuto::~Canuto()
{

}


int Canuto::get_Pos_X()
{
    return PosX;
}

int Canuto::get_Pos_Y()
{
    return PosY;
}

int Canuto::get_Ancho()
{
    return Ancho;
}

int Canuto::get_Alto()
{
    return Alto;
}

