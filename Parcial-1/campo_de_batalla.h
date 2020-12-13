#ifndef CAMPO_DE_BATALLA_H
#define CAMPO_DE_BATALLA_H

#include <QMainWindow>
#include "campo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Campo_de_batalla; }
QT_END_NAMESPACE

class Campo_de_batalla : public QMainWindow
{
    Q_OBJECT

public:
    Campo_de_batalla(QWidget *parent = nullptr);
    ~Campo_de_batalla();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Campo_de_batalla *ui;
    Campo *campo;

};
#endif // CAMPO_DE_BATALLA_H
