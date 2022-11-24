//
// Created by ash on 23.11.22.
//

// You may need to build the calculator (run Qt uic code generator) to get "ui_main_window.h" resolved

#include <iostream>
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

    void main_window::textent(QString s) {
        int pos = ui->lineEdit->cursorPosition();
        ui->lineEdit->setText(s.toUpper());
        QString ans;
        max_char = 0;

        for (auto h : ui->lineEdit->text()) {
            auto t = h.unicode();
            if ((t <= '9' && t >= '0')) {
                max_char = std::max(max_char, t - '0');
                ans += h;
            } else if ((t >= 'A' && t <= 'Z')) {
                max_char = std::max(max_char, t - 'A' + 10);
                ans += h;
            } else {
                pos--;
            }
        }
        ui->spinBox->setValue(std::max(max_char + 1, ui->spinBox->value()));
        ui->lineEdit->setText(ans);
        ui->lineEdit->setCursorPosition(pos);

    }

#pragma region Keyboard

    void main_window::clicked0() {
        ui->lineEdit->insert(QString('0'));
    }

    void main_window::clicked1() {
        ui->lineEdit->insert(QString('1'));
    }

    void main_window::clicked2() {
        ui->lineEdit->insert(QString('2'));
    }

    void main_window::clicked3() {
        ui->lineEdit->insert(QString('3'));
    }

    void main_window::clicked4() {
        ui->lineEdit->insert(QString('4'));
    }

    void main_window::clicked5() {
        ui->lineEdit->insert(QString('5'));
    }

    void main_window::clicked6() {
        ui->lineEdit->insert(QString('6'));
    }

    void main_window::clicked7() {

        ui->lineEdit->insert(QString('7'));
    }

    void main_window::clicked8() {
        ui->lineEdit->insert(QString('8'));
    }

    void main_window::clicked9() {
        ui->lineEdit->insert(QString('9'));
    }

    void main_window::clickedA() {
        ui->lineEdit->insert(QString('A'));
    }

    void main_window::clickedB() {
        ui->lineEdit->insert(QString('B'));
    }

    void main_window::clickedC() {
        ui->lineEdit->insert(QString('C'));
    }

    void main_window::clickedD() {
        ui->lineEdit->insert(QString('D'));
    }

    void main_window::clickedE() {
        ui->lineEdit->insert(QString('E'));
    }

    void main_window::clickedF() {
        ui->lineEdit->insert(QString('F'));
    }

    void main_window::clickedClear() {
        ui->lineEdit->clear();
    }

    void main_window::clickedDel() {
        ui->lineEdit->backspace();
    }

    void main_window::clickedShar() {

    }

    void main_window::clickedShal() {

    }

    void main_window::Light() {
        theme.change_to_light();
        this->setPalette(*theme.get());
        ui->menu->setPalette(*theme.get());
    }

    void main_window::Gray() {
        theme.change_to_gray();
        this->setPalette(*theme.get());
        ui->menu->setPalette(*theme.get());
    }

    void main_window::Dark() {
        theme.change_to_dark();
        this->setPalette(*theme.get());
        ui->menu->setPalette(*theme.get());
    }

    void main_window::Weired() {
        theme.change_to_weired();
        this->setPalette(*theme.get());
        ui->menu->setPalette(*theme.get());
    }

#pragma endregion
} // calculator
