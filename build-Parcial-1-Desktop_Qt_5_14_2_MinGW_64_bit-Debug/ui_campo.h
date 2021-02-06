/********************************************************************************
** Form generated from reading UI file 'campo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPO_H
#define UI_CAMPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Campo
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Campo)
    {
        if (Campo->objectName().isEmpty())
            Campo->setObjectName(QString::fromUtf8("Campo"));
        Campo->resize(1200, 600);
        centralwidget = new QWidget(Campo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, -20, 1200, 600));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 0, 75, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 0, 75, 23));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 0, 75, 23));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 0, 75, 23));
        Campo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Campo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        Campo->setMenuBar(menubar);
        statusbar = new QStatusBar(Campo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Campo->setStatusBar(statusbar);

        retranslateUi(Campo);

        QMetaObject::connectSlotsByName(Campo);
    } // setupUi

    void retranslateUi(QMainWindow *Campo)
    {
        Campo->setWindowTitle(QCoreApplication::translate("Campo", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Campo", "Caso 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Campo", "Caso 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Campo", "Caso 3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Campo", "Caso 4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Campo", "Caso 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Campo: public Ui_Campo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPO_H
