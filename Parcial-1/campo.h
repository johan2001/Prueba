#ifndef CAMPO_H
#define CAMPO_H

#include <QMainWindow>
#include "Librerias.h"

namespace Ui {
class Campo;
}

class Campo : public QMainWindow
{
    Q_OBJECT

private:
    QGraphicsScene *scene;
    QMap<int,bool> keys;
    int mapa[15][38]=
    {

    };

public:
    explicit Campo(QWidget *parent = nullptr);

    ~Campo();

public slots:
//    void colisiones();


private:
    Ui::Campo *ui;
};

#endif // CAMPO_H
