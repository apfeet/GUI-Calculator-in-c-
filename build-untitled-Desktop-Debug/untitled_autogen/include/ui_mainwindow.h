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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button0;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Button8;
    QPushButton *Button9;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_16;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(447, 598);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: black;\n"
"}\n"
"QPushButton{\n"
"	background-color: grey;\n"
"	border-radius: 50px;\n"
"	font-size: 50px;\n"
"}\n"
"QPushButton::pressed{\n"
"	background-color: rgb(66, 66, 66);\n"
"}\n"
"QLabel{\n"
"	text-color: white;\n"
"}\n"
"label{\n"
"	color: red;\n"
"}\n"
"QPushButton#pushButton_11{\n"
"	background-color:orange;\n"
"}QPushButton#pushButton_12{\n"
"	background-color:orange;\n"
"}QPushButton#pushButton_13{\n"
"	background-color:orange;\n"
"}QPushButton#pushButton_14{\n"
"	background-color:orange;\n"
"}QPushButton#pushButton_15{\n"
"	background-color:orange;\n"
"}QPushButton#pushButton_16{\n"
"	background-color:orange;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"	font-size: 30px;\n"
"	font-weight:bold;\n"
"	text-align:center;\n"
"	justify-content:center;\n"
"}"));

        verticalLayout_4->addWidget(label);

        verticalSpacer = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Button0);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Button1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Button2);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Button3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Button4);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Button5);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Button6);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Button7);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 10, -1, 20);
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(Button8);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(Button9);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(50, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_11 = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(pushButton_11);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_12);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_13);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_13);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_16 = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_16);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_16);

        pushButton_14 = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_14);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_15);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setStyleSheet(QString::fromUtf8("pushButton_11{\n"
"	background-color: rgb(207, 103, 0);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_15);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

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
        label->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "CO", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
