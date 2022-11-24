//
// Created by ash on 23.11.22.
//

#ifndef CALCULATOR_MAIN_WINDOW_H
#define CALCULATOR_MAIN_WINDOW_H

#include <QMainWindow>
#include "Theme.h"

namespace calculator {
    QT_BEGIN_NAMESPACE
    namespace Ui { class main_window; }
    QT_END_NAMESPACE

    class main_window : public QMainWindow {
    Q_OBJECT

    public:
        explicit main_window(QWidget *parent = nullptr);

        ~main_window() override;

    private:
        Ui::main_window *ui;
        Theme theme;
        int max_char = 0;
    public slots:

#pragma region Keyboard definitions

        void clicked0();

        void clicked1();

        void clicked2();

        void clicked3();

        void clicked4();

        void clicked5();

        void clicked6();

        void clicked7();

        void clicked8();

        void clicked9();

        void clickedA();

        void clickedB();

        void clickedC();

        void clickedD();

        void clickedE();

        void clickedF();

        void clickedClear();

        void clickedDel();

        void clickedShar();

        void clickedShal();

#pragma endregion

        void textent(QString);

        void Light();

        void Gray();

        void Dark();

        void Weired();
    };

} // calculator

#endif //CALCULATOR_MAIN_WINDOW_H
