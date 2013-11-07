/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 6. Nov 20:21:17 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *openF;
    QPushButton *openFBut;
    QPushButton *pushMd5;
    QTextBrowser *textOut;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 71, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 90, 91, 16));
        openF = new QLineEdit(centralWidget);
        openF->setObjectName(QString::fromUtf8("openF"));
        openF->setGeometry(QRect(110, 20, 191, 20));
        openF->setDragEnabled(true);
        openF->setReadOnly(true);
        openFBut = new QPushButton(centralWidget);
        openFBut->setObjectName(QString::fromUtf8("openFBut"));
        openFBut->setGeometry(QRect(310, 20, 75, 23));
        pushMd5 = new QPushButton(centralWidget);
        pushMd5->setObjectName(QString::fromUtf8("pushMd5"));
        pushMd5->setGeometry(QRect(140, 60, 141, 21));
        textOut = new QTextBrowser(centralWidget);
        textOut->setObjectName(QString::fromUtf8("textOut"));
        textOut->setGeometry(QRect(70, 110, 271, 141));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \320\244\320\260\320\271\320\273\321\203", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", 0, QApplication::UnicodeUTF8));
        openFBut->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270 \321\204\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        pushMd5->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\260\320\273\320\270\320\267\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
