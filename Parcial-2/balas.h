#ifndef BALAS_H
#define BALAS_H

#include "Librerias.h"


class Balas : public QObject, public QGraphicsItem
{
    Q_OBJECT
private:
    int Radio,Ancho,Alto,Vel,Alfa;
    bool des=true;
    float PosX,PosY,Vel_Ini_Y,Vel_Ini_X,t=0,distacia,Altura;
    QGraphicsEllipseItem elipce;
    QString Direccion;
    QPixmap *pixmap;
    QTimer *timer_movimiento;
public:
    
    Balas(int vel,int angulo,QString direccion,QObject *parent = nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ Balas() ;
    void Disparar();
    void Detener();
    void Colision(Balas *bala);
    //metodo Get
    float get_Pos_X();
    float get_Pos_Y();
    float get_Ancho();
    float get_Alto();
    //metodos Set

public slots:

    void Movimiento();
    
};

#endif // BALAS_H
