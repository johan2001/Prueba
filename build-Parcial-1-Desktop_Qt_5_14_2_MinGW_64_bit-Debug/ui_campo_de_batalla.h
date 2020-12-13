/********************************************************************************
** Form generated from reading UI file 'campo_de_batalla.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPO_DE_BATALLA_H
#define UI_CAMPO_DE_BATALLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Campo_de_batalla
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Campo_de_batalla)
    {
        if (Campo_de_batalla->objectName().isEmpty())
            Campo_de_batalla->setObjectName(QString::fromUtf8("Campo_de_batalla"));
        Campo_de_batalla->resize(800, 600);
        centralwidget = new QWidget(Campo_de_batalla);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 801, 551));
        graphicsView->setAutoFillBackground(false);
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/Imagenes/images.jpg);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 210, 75, 23));
        Campo_de_batalla->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Campo_de_batalla);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Campo_de_batalla->setMenuBar(menubar);
        statusbar = new QStatusBar(Campo_de_batalla);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Campo_de_batalla->setStatusBar(statusbar);

        retranslateUi(Campo_de_batalla);

        QMetaObject::connectSlotsByName(Campo_de_batalla);
    } // setupUi

    void retranslateUi(QMainWindow *Campo_de_batalla)
    {
        Campo_de_batalla->setWindowTitle(QCoreApplication::translate("Campo_de_batalla", "Campo_de_batalla", nullptr));
        pushButton->setText(QCoreApplication::translate("Campo_de_batalla", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Campo_de_batalla: public Ui_Campo_de_batalla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPO_DE_BATALLA_H
