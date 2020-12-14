#include "balas.h"


Balas::Balas(float x, float y,float veliniX,float veliniY,float angulo,QString direccion, QObject *parent) : QObject(parent)
{
    PosX = x;
    PosY = y;
    Angulo = angulo;
    VelX = veliniX;
    VelY = veliniY;
    Direccion = direccion;
    Radio =10;
    Ancho = 20;
    Alto = 20;
    pixmap = new QPixmap(":/Imagenes/Bola.png");// Guardar imagen en una variable

    timer_movimiento  = new QTimer();
    connect(timer_movimiento, SIGNAL(timeout()), this, SLOT(Movimiento()));

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

void Balas::Disparar()
{
    timer_movimiento->start(30);
}

void Balas::Detener()
{
    timer_movimiento->stop();
}

void Balas::Movimiento()
{
    if(Direccion=="Izquierda"){
        PosX -= VelX;

        if (VelY==0){
            des = false;
        }
        if (des){
            PosY -= VelY;
            VelY -= 0.2;
        }

        else{
            PosY += VelY;
            VelY += 0.2;
        }

        setPos(PosX,PosY);
    }
    if(Direccion=="Derecha"){
        PosX += VelX;

        if (VelY==0){
            des = false;
        }
        if (des){
            PosY -= VelY;
            VelY -= 0.2;
        }

        else{
            PosY += VelY;
            VelY += 0.2;
        }

        setPos(PosX,PosY);
        }
}
