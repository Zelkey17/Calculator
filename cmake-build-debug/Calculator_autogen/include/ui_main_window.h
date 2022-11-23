/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

namespace calculator {

class Ui_main_window
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator__main_window)
    {
        if (calculator__main_window->objectName().isEmpty())
            calculator__main_window->setObjectName(QString::fromUtf8("calculator__main_window"));
        calculator__main_window->resize(400, 300);
        centralwidget = new QWidget(calculator__main_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        calculator__main_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator__main_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 17));
        calculator__main_window->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator__main_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator__main_window->setStatusBar(statusbar);

        retranslateUi(calculator__main_window);

        QMetaObject::connectSlotsByName(calculator__main_window);
    } // setupUi

    void retranslateUi(QMainWindow *calculator__main_window)
    {
        calculator__main_window->setWindowTitle(QCoreApplication::translate("calculator::main_window", "main_window", nullptr));
    } // retranslateUi

};

} // namespace calculator

namespace calculator {
namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui
} // namespace calculator

#endif // UI_MAIN_WINDOW_H
