#ifndef BALAS_H
#define BALAS_H

#include "Librerias.h"


class Balas : public QObject, public QGraphicsItem
{
    Q_OBJECT
private:

    unsigned short Radio,Ancho,Alto;
    bool des=true;
    float PosX,PosY,VelX,VelY,VelIniY,Angulo;
    float G=9.81;

    QString Direccion;
    QPixmap *pixmap;
    QTimer *timer_movimiento;
public:
    
    Balas(float x, float y,float veliniX,float veliniY,float angulo,QString direccion,QObject *parent = nullptr);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~ Balas() ;
    void Disparar();
    void Detener();

signals:

public slots:

    void Movimiento();
    
};

#endif // BALAS_H
