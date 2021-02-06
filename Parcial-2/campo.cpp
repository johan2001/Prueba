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
    ui->graphicsView->setBackgroundBrush(QImage("").scaled(1200,600)); //Intoducir fondo

    canutodefensivo = new Canuto(1100,275,"Derecha");
    scene->addItem(canutodefensivo);

    canutofensivo = new Canuto(100,350,"Izquierda");
    scene->addItem(canutofensivo);

    canutodefensivo = new Canuto(1100,320,"Torre");
    scene->addItem(canutodefensivo);

    canutofensivo = new Canuto(100,400,"Torre2");
    scene->addItem(canutofensivo);

    timer  = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(colisiones()));
    timer->start(0);
}

Campo::~Campo()
{
    delete ui;
}

void Campo::colisiones()
{

}

void Campo::on_pushButton_clicked()
{
    balasof = new Balas(25,320,"Derecha");
    scene->addItem(balasof);
    balasof->Disparar();

}

void Campo::on_pushButton_2_clicked()
{
    balasdef = new Balas(25,200,"Izquierda");
    scene->addItem(balasdef);
    balasdef->Disparar();
}


void Campo::on_pushButton_3_clicked()
{

}

void Campo::on_pushButton_4_clicked()
{

}

void Campo::on_pushButton_5_clicked()
{


}
