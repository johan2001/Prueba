#include "campo_de_batalla.h"
#include "ui_campo_de_batalla.h"

Campo_de_batalla::Campo_de_batalla(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Campo_de_batalla)
{
    ui->setupUi(this);
    campo = new Campo;
}

Campo_de_batalla::~Campo_de_batalla()
{
    delete ui;
}


void Campo_de_batalla::on_pushButton_clicked()
{
    hide();
    campo->show();
}
