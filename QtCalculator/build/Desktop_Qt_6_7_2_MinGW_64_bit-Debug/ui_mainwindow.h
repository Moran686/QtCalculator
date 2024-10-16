/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_about;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *btn7;
    QPushButton *btn9;
    QPushButton *btn8;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn0;
    QPushButton *btn3;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btnDot;
    QPushButton *btnEqual;
    QPushButton *btnMuti;
    QPushButton *btnAdd;
    QPushButton *btnSub;
    QPushButton *btnDivi;
    QPushButton *btnRight;
    QPushButton *btnLeft;
    QPushButton *btnClear;
    QPushButton *btnBack;
    QLineEdit *lineEdit2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(261, 299);
        MainWindow->setMinimumSize(QSize(261, 299));
        MainWindow->setMaximumSize(QSize(261, 299));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/Image/calc-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action->setIcon(icon);
        action_about = new QAction(MainWindow);
        action_about->setObjectName("action_about");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 20, 241, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);"));
        btn7 = new QPushButton(centralWidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(10, 130, 41, 31));
        btn7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn9 = new QPushButton(centralWidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(110, 130, 41, 31));
        btn9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn8 = new QPushButton(centralWidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(60, 130, 41, 31));
        btn8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn4 = new QPushButton(centralWidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(10, 170, 41, 31));
        btn4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn5 = new QPushButton(centralWidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(60, 170, 41, 31));
        btn5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn6 = new QPushButton(centralWidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(110, 170, 41, 31));
        btn6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn0 = new QPushButton(centralWidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(10, 250, 91, 31));
        btn0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn3 = new QPushButton(centralWidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(110, 210, 41, 31));
        btn3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn2 = new QPushButton(centralWidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(60, 210, 41, 31));
        btn2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btn1 = new QPushButton(centralWidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(10, 210, 41, 31));
        btn1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btnDot = new QPushButton(centralWidget);
        btnDot->setObjectName("btnDot");
        btnDot->setGeometry(QRect(110, 250, 41, 31));
        btnDot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(195, 195, 195);\n"
"}"));
        btnEqual = new QPushButton(centralWidget);
        btnEqual->setObjectName("btnEqual");
        btnEqual->setGeometry(QRect(210, 210, 41, 71));
        btnEqual->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(85, 170, 255);\n"
"border-radius:5px;\n"
"color:rgb(255, 255, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(63, 126, 189);\n"
"}"));
        btnMuti = new QPushButton(centralWidget);
        btnMuti->setObjectName("btnMuti");
        btnMuti->setGeometry(QRect(160, 210, 41, 31));
        btnMuti->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        btnAdd = new QPushButton(centralWidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(160, 130, 41, 31));
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        btnSub = new QPushButton(centralWidget);
        btnSub->setObjectName("btnSub");
        btnSub->setGeometry(QRect(160, 170, 41, 31));
        btnSub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        btnDivi = new QPushButton(centralWidget);
        btnDivi->setObjectName("btnDivi");
        btnDivi->setGeometry(QRect(160, 250, 41, 31));
        btnDivi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        btnRight = new QPushButton(centralWidget);
        btnRight->setObjectName("btnRight");
        btnRight->setGeometry(QRect(60, 90, 41, 31));
        btnRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        btnLeft = new QPushButton(centralWidget);
        btnLeft->setObjectName("btnLeft");
        btnLeft->setGeometry(QRect(10, 90, 41, 31));
        btnLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(210, 90, 41, 71));
        btnClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        btnBack = new QPushButton(centralWidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(110, 90, 91, 31));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(207, 255, 252);\n"
"border-radius:5px;\n"
"color:rgb(85, 170, 255);\n"
"font:bold;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(192, 224, 252);\n"
"}"));
        lineEdit2 = new QLineEdit(centralWidget);
        lineEdit2->setObjectName("lineEdit2");
        lineEdit2->setGeometry(QRect(10, 50, 241, 31));
        lineEdit2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);"));
        lineEdit2->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251", nullptr));
        action_about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\350\256\241\347\256\227\345\231\250", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnMuti->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnDivi->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnRight->setText(QCoreApplication::translate("MainWindow", "\357\274\211", nullptr));
        btnLeft->setText(QCoreApplication::translate("MainWindow", "\357\274\210", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnBack->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
