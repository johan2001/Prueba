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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Campo
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
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
        graphicsView->setGeometry(QRect(0, 0, 1200, 600));
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
    } // retranslateUi

};

namespace Ui {
    class Campo: public Ui_Campo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPO_H
