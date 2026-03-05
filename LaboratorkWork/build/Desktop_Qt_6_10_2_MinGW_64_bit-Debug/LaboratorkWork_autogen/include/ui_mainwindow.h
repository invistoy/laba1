/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_1;
    QAction *action_2;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QWidget *page_2;
    QPushButton *pushButton_poliglot;
    QLabel *label_verdict;
    QLabel *label_result;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_1 = new QAction(MainWindow);
        action_1->setObjectName("action_1");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 350, 30));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 70, 571, 301));
        page = new QWidget();
        page->setObjectName("page");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 130, 30));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 0, 191, 30));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 0, 160, 30));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(0, 50, 130, 30));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 50, 191, 30));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 50, 160, 30));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 100, 431, 91));
        textBrowser->setUndoRedoEnabled(false);
        textBrowser->setCursorWidth(0);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_poliglot = new QPushButton(page_2);
        pushButton_poliglot->setObjectName("pushButton_poliglot");
        pushButton_poliglot->setGeometry(QRect(0, 0, 130, 30));
        label_verdict = new QLabel(page_2);
        label_verdict->setObjectName("label_verdict");
        label_verdict->setGeometry(QRect(150, 0, 160, 30));
        label_verdict->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_result = new QLabel(page_2);
        label_result->setObjectName("label_result");
        label_result->setGeometry(QRect(330, 0, 191, 30));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_1);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_1->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\321\203\321\200\321\201\320\270\320\270", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\273\320\270\320\264\321\200\320\276\320\274", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\321\203\321\200\321\201\320\270\321\217 F5", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\321\203\321\200\321\201\320\270\321\217 F13", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\320\267\320\276\320\262\320\276\320\262:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F(n) = 1, \320\277\321\200\320\270 n &lt;= 1;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F(n) = 5 * n + F(n - 1) + F(2), \320\265\321\201\320\273\320\270 n &gt; 1 \320\270 \320\277\321\200\320\270 \321\215\321\202\320\276\320\274 n \320\275\320\265\321\207\321\221\321\202\320\275\320\276;</p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F(n) = 3 * F(n - 1), \320\265\321\201\320\273\320\270 n &gt; 1 \320\270 \320\277\321\200\320\270 \321\215\321\202\320\276\320\274 n \321\207\321\221\321\202\320\275\320\276.</p></body></html>", nullptr));
        pushButton_poliglot->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\217\321\201\320\275\320\270\321\202\321\214", nullptr));
        label_verdict->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\320\264\320\270\320\272\321\202:", nullptr));
        label_result->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
