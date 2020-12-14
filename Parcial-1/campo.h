#ifndef CAMPO_H
#define CAMPO_H

#include <QMainWindow>
#include "Librerias.h"
#include "balas.h"

namespace Ui {
class Campo;
}

class Campo : public QMainWindow
{
    Q_OBJECT

private:
    QGraphicsScene *scene;
    QMap<int,bool> keys;
    Balas *balas1;
    Balas *balas2;
    Balas *balas3;
    Balas *balas4;
    Balas *balas5;

    int mapa[15][38]=
    {

    };

public:
    explicit Campo(QWidget *parent = nullptr);

    ~Campo();

public slots:
//    void colisiones();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Campo *ui;
};

#endif // CAMPO_H
