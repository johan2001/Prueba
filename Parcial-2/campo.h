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
    Balas *balasof;
    Balas *balasdef;
    Canuto *canutodefensivo;
    Canuto *canutofensivo;
    Canuto *Torre;
    Canuto *Torre2;
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
