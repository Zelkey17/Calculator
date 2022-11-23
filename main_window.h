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
    public slots:

        void slot1();

        void slot2();

        void gray();
    };

} // calculator

#endif //CALCULATOR_MAIN_WINDOW_H
