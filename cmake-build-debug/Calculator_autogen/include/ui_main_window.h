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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace calculator {

class Ui_main_window
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *button3;
    QPushButton *button7;
    QPushButton *buttonB;
    QPushButton *pushButton_5;
    QPushButton *buttonE;
    QPushButton *pushButton_7;
    QPushButton *buttonF;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button6;
    QPushButton *buttonA;
    QPushButton *button0;
    QPushButton *buttonD;
    QPushButton *button9;
    QPushButton *button5;
    QPushButton *buttonC;
    QPushButton *button8;
    QPushButton *button4;
    QSpinBox *spinBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *calculator__main_window)
    {
        if (calculator__main_window->objectName().isEmpty())
            calculator__main_window->setObjectName(QString::fromUtf8("calculator__main_window"));
        calculator__main_window->resize(462, 767);
        QPalette palette;
        QBrush brush(QColor(222, 221, 218, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(94, 92, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(61, 56, 70, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(119, 118, 123, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(154, 153, 151, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(92, 88, 88, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(15, 103, 63, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush9);
        QBrush brush10(QColor(246, 245, 244, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush11(QColor(73, 69, 65, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(222, 221, 218, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        QBrush brush13(QColor(145, 145, 145, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        calculator__main_window->setPalette(palette);
        action = new QAction(calculator__main_window);
        action->setObjectName(QString::fromUtf8("action"));
        action->setCheckable(false);
        action_2 = new QAction(calculator__main_window);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_2->setCheckable(false);
        action_2->setChecked(false);
        action_3 = new QAction(calculator__main_window);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_3->setCheckable(false);
        action_4 = new QAction(calculator__main_window);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_4->setCheckable(false);
        action_5 = new QAction(calculator__main_window);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(calculator__main_window);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(calculator__main_window);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(calculator__main_window);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        centralwidget = new QWidget(calculator__main_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 441, 71));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        button3 = new QPushButton(centralwidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setGeometry(QRect(280, 660, 81, 71));
        button3->setFont(font);
        button7 = new QPushButton(centralwidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setGeometry(QRect(280, 580, 81, 71));
        button7->setFont(font);
        buttonB = new QPushButton(centralwidget);
        buttonB->setObjectName(QString::fromUtf8("buttonB"));
        buttonB->setGeometry(QRect(280, 500, 81, 71));
        buttonB->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 500, 81, 71));
        QPalette palette1;
        QBrush brush15(QColor(149, 55, 15, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        pushButton_5->setPalette(palette1);
        QFont font1;
        font1.setPointSize(17);
        pushButton_5->setFont(font1);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("del")));
        pushButton_5->setIcon(icon);
        buttonE = new QPushButton(centralwidget);
        buttonE->setObjectName(QString::fromUtf8("buttonE"));
        buttonE->setGeometry(QRect(190, 420, 81, 71));
        buttonE->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(370, 420, 81, 71));
        QPalette palette2;
        QBrush brush16(QColor(153, 17, 33, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        pushButton_7->setPalette(palette2);
        QFont font2;
        font2.setPointSize(16);
        pushButton_7->setFont(font2);
        buttonF = new QPushButton(centralwidget);
        buttonF->setObjectName(QString::fromUtf8("buttonF"));
        buttonF->setGeometry(QRect(280, 420, 81, 71));
        buttonF->setFont(font);
        button1 = new QPushButton(centralwidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setGeometry(QRect(100, 660, 81, 71));
        button1->setFont(font);
        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setGeometry(QRect(190, 660, 81, 71));
        button2->setFont(font);
        button6 = new QPushButton(centralwidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setGeometry(QRect(190, 580, 81, 71));
        button6->setFont(font);
        buttonA = new QPushButton(centralwidget);
        buttonA->setObjectName(QString::fromUtf8("buttonA"));
        buttonA->setGeometry(QRect(190, 500, 81, 71));
        buttonA->setFont(font);
        button0 = new QPushButton(centralwidget);
        button0->setObjectName(QString::fromUtf8("button0"));
        button0->setGeometry(QRect(10, 660, 81, 71));
        button0->setFont(font);
        buttonD = new QPushButton(centralwidget);
        buttonD->setObjectName(QString::fromUtf8("buttonD"));
        buttonD->setGeometry(QRect(100, 420, 81, 71));
        buttonD->setFont(font);
        button9 = new QPushButton(centralwidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setGeometry(QRect(100, 500, 81, 71));
        button9->setFont(font);
        button5 = new QPushButton(centralwidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setGeometry(QRect(100, 580, 81, 71));
        button5->setFont(font);
        buttonC = new QPushButton(centralwidget);
        buttonC->setObjectName(QString::fromUtf8("buttonC"));
        buttonC->setGeometry(QRect(10, 420, 81, 71));
        buttonC->setFont(font);
        button8 = new QPushButton(centralwidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setGeometry(QRect(10, 500, 81, 71));
        button8->setFont(font);
        button4 = new QPushButton(centralwidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setGeometry(QRect(10, 580, 81, 71));
        button4->setFont(font);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(10, 100, 121, 31));
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMinimum(2);
        spinBox->setMaximum(35);
        spinBox->setValue(10);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 140, 441, 161));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 439, 159));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 660, 81, 71));
        pushButton_6->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(370, 580, 81, 71));
        pushButton_8->setFont(font);
        calculator__main_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator__main_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 462, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush9);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        menu->setPalette(palette3);
        calculator__main_window->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_5);
        menu->addAction(action_6);
        menu->addAction(action_7);
        menu->addAction(action_8);

        retranslateUi(calculator__main_window);
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), calculator__main_window, SLOT(textent(QString)));
        QObject::connect(buttonC, SIGNAL(clicked()), calculator__main_window, SLOT(clickedC()));
        QObject::connect(buttonD, SIGNAL(clicked()), calculator__main_window, SLOT(clickedD()));
        QObject::connect(buttonE, SIGNAL(clicked()), calculator__main_window, SLOT(clickedE()));
        QObject::connect(buttonF, SIGNAL(clicked()), calculator__main_window, SLOT(clickedF()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), calculator__main_window, SLOT(clickedClear()));
        QObject::connect(button8, SIGNAL(clicked()), calculator__main_window, SLOT(clicked8()));
        QObject::connect(button9, SIGNAL(clicked()), calculator__main_window, SLOT(clicked9()));
        QObject::connect(buttonA, SIGNAL(clicked()), calculator__main_window, SLOT(clickedA()));
        QObject::connect(buttonB, SIGNAL(clicked()), calculator__main_window, SLOT(clickedB()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), calculator__main_window, SLOT(clickedDel()));
        QObject::connect(button4, SIGNAL(clicked()), calculator__main_window, SLOT(clicked4()));
        QObject::connect(button5, SIGNAL(clicked()), calculator__main_window, SLOT(clicked5()));
        QObject::connect(button6, SIGNAL(clicked()), calculator__main_window, SLOT(clicked6()));
        QObject::connect(button7, SIGNAL(clicked()), calculator__main_window, SLOT(clicked7()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), calculator__main_window, SLOT(clickedShar()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), calculator__main_window, SLOT(clickedShal()));
        QObject::connect(button0, SIGNAL(clicked()), calculator__main_window, SLOT(clicked0()));
        QObject::connect(button1, SIGNAL(clicked()), calculator__main_window, SLOT(clicked1()));
        QObject::connect(button2, SIGNAL(clicked()), calculator__main_window, SLOT(clicked2()));
        QObject::connect(button3, SIGNAL(clicked()), calculator__main_window, SLOT(clicked3()));
        QObject::connect(action_5, SIGNAL(triggered()), calculator__main_window, SLOT(Light()));
        QObject::connect(action_6, SIGNAL(triggered()), calculator__main_window, SLOT(Dark()));
        QObject::connect(action_7, SIGNAL(triggered()), calculator__main_window, SLOT(Gray()));
        QObject::connect(action_8, SIGNAL(triggered()), calculator__main_window, SLOT(Weired()));

        QMetaObject::connectSlotsByName(calculator__main_window);
    } // setupUi

    void retranslateUi(QMainWindow *calculator__main_window)
    {
        calculator__main_window->setWindowTitle(QCoreApplication::translate("calculator::main_window", "main_window", nullptr));
        action->setText(QCoreApplication::translate("calculator::main_window", "\320\241\320\262\320\265\321\202\320\273\320\260\321\217", nullptr));
        action_2->setText(QCoreApplication::translate("calculator::main_window", "\320\242\321\221\320\274\320\275\320\260\321\217", nullptr));
        action_3->setText(QCoreApplication::translate("calculator::main_window", "\320\241\320\265\321\200\320\260\321\217", nullptr));
        action_4->setText(QCoreApplication::translate("calculator::main_window", "\320\241\321\202\321\200\320\260\320\275\320\275\320\260\321\217", nullptr));
        action_5->setText(QCoreApplication::translate("calculator::main_window", "\320\241\320\262\320\265\321\202\320\273\320\260\321\217", nullptr));
        action_6->setText(QCoreApplication::translate("calculator::main_window", "\320\242\321\221\320\274\320\275\320\260\321\217", nullptr));
        action_7->setText(QCoreApplication::translate("calculator::main_window", "\320\241\320\265\321\200\320\260\321\217", nullptr));
        action_8->setText(QCoreApplication::translate("calculator::main_window", " \320\241\321\202\321\200\320\260\320\275\320\275\320\260\321\217", nullptr));
        button3->setText(QCoreApplication::translate("calculator::main_window", "3", nullptr));
        button7->setText(QCoreApplication::translate("calculator::main_window", "7", nullptr));
        buttonB->setText(QCoreApplication::translate("calculator::main_window", "B", nullptr));
        pushButton_5->setText(QCoreApplication::translate("calculator::main_window", "del", nullptr));
        buttonE->setText(QCoreApplication::translate("calculator::main_window", "E", nullptr));
        pushButton_7->setText(QCoreApplication::translate("calculator::main_window", "clear", nullptr));
        buttonF->setText(QCoreApplication::translate("calculator::main_window", "F", nullptr));
        button1->setText(QCoreApplication::translate("calculator::main_window", "1", nullptr));
        button2->setText(QCoreApplication::translate("calculator::main_window", "2", nullptr));
        button6->setText(QCoreApplication::translate("calculator::main_window", "6", nullptr));
        buttonA->setText(QCoreApplication::translate("calculator::main_window", "A", nullptr));
        button0->setText(QCoreApplication::translate("calculator::main_window", "0", nullptr));
        buttonD->setText(QCoreApplication::translate("calculator::main_window", "D", nullptr));
        button9->setText(QCoreApplication::translate("calculator::main_window", "9", nullptr));
        button5->setText(QCoreApplication::translate("calculator::main_window", "5", nullptr));
        buttonC->setText(QCoreApplication::translate("calculator::main_window", "C", nullptr));
        button8->setText(QCoreApplication::translate("calculator::main_window", "8", nullptr));
        button4->setText(QCoreApplication::translate("calculator::main_window", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("calculator::main_window", "<<", nullptr));
        pushButton_8->setText(QCoreApplication::translate("calculator::main_window", ">>", nullptr));
        menu->setTitle(QCoreApplication::translate("calculator::main_window", "\320\242\320\265\320\274\320\260", nullptr));
    } // retranslateUi

};

} // namespace calculator

namespace calculator {
namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui
} // namespace calculator

#endif // UI_MAIN_WINDOW_H
