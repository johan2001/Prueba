#include "balas.h"


Balas::Balas( int vel, int alfa, QString direccion, QObject *parent) : QObject(parent)
{
    Direccion = direccion;

    if (Direccion == "Derecha"){
        distacia = 800;
        Altura = 350;
        PosX = 100;
        PosY = Altura;
        Ancho = 60;
        Alto = 60;
        Radio =30;

    }
    if (Direccion == "Izquierda"){
        distacia = 800;
        Altura =275;
        PosX = 1100;
        PosY = Altura;
        Ancho = 50;
        Alto = 50;
        Radio =25;

    }


    Alfa = alfa;
    Vel = vel;


    QPen Negro(Qt::black);

    Vel_Ini_X = Vel*cos(Alfa*Pi/180);
    Vel_Ini_Y = Vel*sin(Alfa*Pi/180);


    pixmap = new QPixmap(":/Imagenes/Bola.png");// Guardar imagen en una variable

    timer_movimiento  = new QTimer(this);
    connect(timer_movimiento, SIGNAL(timeout()), this, SLOT(Movimiento()));

    setPos(PosX,PosY); //Se ubica en la posciosn correspondiente el objeto
}

QRectF Balas::boundingRect() const // Se crea un rectangulo
{
    return QRectF(0,0,Alto,Ancho);
}

void Balas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) // se introduce la imagen en el rectangulo
{


     // Se pinta en el rectangulo usando el pixmap
    painter->setBrush(Qt::green);
    painter->drawEllipse(boundingRect().center(),Radio,Radio);
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect().center(),10,10);
    UNUSED(option);
    UNUSED(widget);
}

Balas::~Balas()
{

}

void Balas::Disparar()
{
    timer_movimiento->start(100);
}

void Balas::Detener()
{
    timer_movimiento->stop();
}

void Balas::Colision(Balas *bala)
{
    int Pos_iz_bala =bala->get_Pos_X(), Pos_der_bala =bala->get_Pos_X()+bala->get_Ancho();
    int Pos_ari_bala =bala->get_Pos_Y(), Pos_aba_bala =bala->get_Pos_Y() +bala->get_Alto();

    if(Pos_der_bala >= PosX+20 && Pos_iz_bala <= PosX+Ancho+20 && Pos_aba_bala >= PosY+20 && Pos_ari_bala <= PosY +Alto+20 ){

    }
    else {

    }

}

float Balas::get_Pos_X()
{
    return PosX;
}
float Balas::get_Pos_Y()
{
    return PosY;
}
float Balas::get_Alto()
{
    return Alto;
}
float Balas::get_Ancho()
{
    return Ancho;
}


void Balas::Movimiento()
{
    t = t + 0.2;
    if(Direccion=="Izquierda"){
        PosX = PosX + Vel_Ini_X * t;
        PosY = PosY + (Vel_Ini_Y*t)-(gravedad*t*t*0.5);
        setPos(PosX,PosY);
    }
    if(Direccion=="Derecha"){
        PosX = PosX + Vel_Ini_X * t;
        PosY = PosY + (Vel_Ini_Y*t)-(gravedad*t*t*0.5);
        setPos(PosX,PosY);
    }
    if (PosY > 600 || PosX < 0 || PosY < 0 || PosX > 1200){
        timer_movimiento->stop();
        Vel_Ini_Y = 0;
        Vel_Ini_X = 0;
        setPos(600,500);
    }


}
