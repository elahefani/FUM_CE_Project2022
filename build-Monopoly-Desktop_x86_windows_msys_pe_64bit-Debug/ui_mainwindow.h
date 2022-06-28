/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Board;
    QGroupBox *groupBox;
    QRadioButton *choice2;
    QRadioButton *choice3;
    QRadioButton *choice4;
    QRadioButton *choice5;
    QRadioButton *choice6;
    QRadioButton *choice7;
    QRadioButton *choice8;
    QPushButton *Chance;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(498, 503);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Board = new QLabel(centralwidget);
        Board->setObjectName(QString::fromUtf8("Board"));
        Board->setGeometry(QRect(20, 10, 461, 461));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 140, 171, 171));
        groupBox->setMouseTracking(false);
        groupBox->setTabletTracking(false);
        groupBox->setAutoFillBackground(true);
        choice2 = new QRadioButton(groupBox);
        choice2->setObjectName(QString::fromUtf8("choice2"));
        choice2->setGeometry(QRect(10, 20, 85, 20));
        choice3 = new QRadioButton(groupBox);
        choice3->setObjectName(QString::fromUtf8("choice3"));
        choice3->setGeometry(QRect(10, 40, 85, 20));
        choice4 = new QRadioButton(groupBox);
        choice4->setObjectName(QString::fromUtf8("choice4"));
        choice4->setGeometry(QRect(10, 60, 85, 20));
        choice5 = new QRadioButton(groupBox);
        choice5->setObjectName(QString::fromUtf8("choice5"));
        choice5->setGeometry(QRect(10, 80, 85, 20));
        choice5->setAutoFillBackground(false);
        choice6 = new QRadioButton(groupBox);
        choice6->setObjectName(QString::fromUtf8("choice6"));
        choice6->setGeometry(QRect(10, 100, 85, 20));
        choice7 = new QRadioButton(groupBox);
        choice7->setObjectName(QString::fromUtf8("choice7"));
        choice7->setGeometry(QRect(10, 120, 85, 20));
        choice8 = new QRadioButton(groupBox);
        choice8->setObjectName(QString::fromUtf8("choice8"));
        choice8->setGeometry(QRect(10, 140, 85, 20));
        Chance = new QPushButton(centralwidget);
        Chance->setObjectName(QString::fromUtf8("Chance"));
        Chance->setGeometry(QRect(200, 350, 101, 61));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Board->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Please choose number of players", nullptr));
        choice2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        choice3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        choice4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        choice5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        choice6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        choice7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        choice8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Chance->setText(QCoreApplication::translate("MainWindow", "Chance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
