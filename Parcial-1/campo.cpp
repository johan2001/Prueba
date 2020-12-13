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

}

Campo::~Campo()
{
    delete ui;
}
