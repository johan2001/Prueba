#ifndef CAMPO_H
#define CAMPO_H

#include <QMainWindow>
#include "Librerias.h"
#include "balas.h"
#include "canuto.h"

namespace Ui {
class Campo;
}

class Campo : public QMainWindow
{
    Q_OBJECT

private:
    QGraphicsScene *scene;
    Balas *balas1;
    Balas *balas2;
    Balas *balas3;
    Balas *balas4;
    Balas *balas5;
    Canuto *canuto1;
    Canuto *canuto2;
    QTimer *timer;

public:
    explicit Campo(QWidget *parent = nullptr);

    ~Campo();

public slots:
   void colisiones();


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
