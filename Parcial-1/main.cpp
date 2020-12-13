#include "campo_de_batalla.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Campo_de_batalla w;
    w.show();
    return a.exec();
}
