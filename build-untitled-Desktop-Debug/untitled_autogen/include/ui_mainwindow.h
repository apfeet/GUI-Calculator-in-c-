/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button0;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button6;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QLabel *label;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(447, 598);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: grey;\n"
"	border-radius: 50px;\n"
"}\n"
"QPushButton::pressed{\n"
"	background-color: rgb(66, 66, 66);\n"
"}\n"
"QLabel{\n"
"	text-color: white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(10, 170, 101, 101));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(120, 170, 101, 101));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(230, 170, 101, 101));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(340, 170, 101, 101));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(230, 280, 101, 101));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(10, 280, 101, 101));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(120, 280, 101, 101));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(340, 280, 101, 101));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(10, 390, 101, 101));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(120, 390, 101, 101));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(250, 410, 61, 61));
        pushButton_11->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(310, 410, 61, 61));
        pushButton_12->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(370, 410, 61, 61));
        pushButton_13->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(310, 470, 61, 61));
        pushButton_14->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 40, 181, 71));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	text-color: white;\n"
"	font-size: 25px;\n"
"}"));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(370, 470, 61, 61));
        pushButton_15->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(250, 470, 61, 61));
        pushButton_16->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 447, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "CO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
