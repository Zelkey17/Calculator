//
// Created by ash on 23.11.22.
//

// You may need to build the calculator (run Qt uic code generator) to get "ui_main_window.h" resolved

#include "main_window.h"
#include "ui_main_window.h"

namespace calculator {
    main_window::main_window(QWidget *parent) :
            QMainWindow(parent), ui(new Ui::main_window) {
        ui->setupUi(this);
    }

    main_window::~main_window() {
        delete ui;
    }

    void main_window::slot1() {
        theme.change_to_dark();
        this->setPalette(*theme.get());
    }

    void main_window::slot2() {
        theme.change_to_light();
        this->setPalette(*theme.get());
    }

    void main_window::gray() {
        theme.change_to_gray();
        this->setPalette(*theme.get());
    }
} // calculator
