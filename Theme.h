//
// Created by ash on 23.11.22.
//

#ifndef CALCULATOR_THEME_H
#define CALCULATOR_THEME_H

#include <QPalette>

namespace calculator {

    class Theme {
        QPalette _palette;

    public:
        void change_to_dark();

        void change_to_light();

        void change_to_gray();

        QPalette *get();
    };

} // calculator

#endif //CALCULATOR_THEME_H
