//
// Created by ash on 23.11.22.
//

#ifndef CALCULATOR_PROGRAM_H
#define CALCULATOR_PROGRAM_H

#include <QApplication>
#include <QPushButton>
#include <string>

namespace calculator {

    class Program {
        int argc;
        char **argv;
    public:
        Program(int, char *[]);

        int Run();
    };

} // calculator

#endif //CALCULATOR_PROGRAM_H
