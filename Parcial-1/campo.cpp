#include "campo.h"
#include "ui_campo.h"

Campo::Campo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Campo)
{
    ui->setupUi(this);
    startTimer(2000/60);


    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,1200,600);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setBackgroundBrush(QImage(":/Imagenes/Fondo.png").scaled(1200,600)); //Intoducir fondo

    canuto1 = new Canuto(1100,230,"Derecha");
    scene->addItem(canuto1);

    canuto2 = new Canuto(100,330,"Izquierda");
    scene->addItem(canuto2);

    timer  = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(colisones()));
    timer->start(0);
}

Campo::~Campo()
{
    delete ui;
}

void Campo::colisiones()
{
  qDebug("entro");
}

void Campo::on_pushButton_clicked()
{
    balas1 = new Balas(1100,250,10,8.3,50,"Izquierda");
    scene->addItem(balas1);
    balas2 = new Balas(1100,250,9,10,50,"Izquierda");
    scene->addItem(balas2);
    balas3 = new Balas(1100,250,15,5,50,"Izquierda");
    scene->addItem(balas3);
    balas1->Disparar();
    balas2->Disparar();
    balas3->Disparar();
}

void Campo::on_pushButton_2_clicked()
{
    balas1 = new Balas(100,380,6.5,16,50,"Derecha");
    scene->addItem(balas1);
    balas2 = new Balas(100,380,10,11,50,"Derecha");
    scene->addItem(balas2);
    balas3 = new Balas(100,380,14,9,50,"Derecha");
    scene->addItem(balas3);
    balas1->Disparar();
    balas2->Disparar();
    balas3->Disparar();
}


void Campo::on_pushButton_3_clicked()
{
    balas2 = new Balas(100,380,10,11,50,"Derecha");
    scene->addItem(balas2);
    balas2->Disparar();
    balas1 = new Balas(1100,250,13,6,50,"Izquierda");
    scene->addItem(balas1);
    balas2 = new Balas(1100,250,10,8.4,50,"Izquierda");
    scene->addItem(balas2);
    balas3 = new Balas(1100,250,15,5,50,"Izquierda");
    scene->addItem(balas3);
    balas1->Disparar();
    balas2->Disparar();
    balas3->Disparar();
}

void Campo::on_pushButton_4_clicked()
{
    balas3 = new Balas(100,380,14,9,50,"Derecha");
    scene->addItem(balas3);
    balas3->Disparar();
    balas1 = new Balas(1100,250,6,6,50,"Izquierda");
    scene->addItem(balas1);
    balas2 = new Balas(1100,250,8,8.4,50,"Izquierda");
    scene->addItem(balas2);
    balas3 = new Balas(1100,250,15,5,50,"Izquierda");
    scene->addItem(balas3);
    balas1->Disparar();
    balas2->Disparar();
    balas3->Disparar();
}

void Campo::on_pushButton_5_clicked()
{
    balas1 = new Balas(100,380,15,12,50,"Derecha");
    scene->addItem(balas1);
    balas2 = new Balas(100,380,15,13,50,"Derecha");
    scene->addItem(balas2);
    balas3 = new Balas(100,380,15,11,50,"Derecha");
    scene->addItem(balas3);
    balas1->Disparar();
    balas2->Disparar();
    balas3->Disparar();
    balas4 = new Balas(100,380,10,11,50,"Derecha");
    scene->addItem(balas4);
    balas4->Disparar();
    balas5 = new Balas(1100,250,10,8.5,50,"Izquierda");
    scene->addItem(balas5);
    balas5->Disparar();

}
