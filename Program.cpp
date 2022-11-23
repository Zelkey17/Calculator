//
// Created by ash on 23.11.22.
//

#include "Program.h"

namespace project {
    int Program::Run() {
        QApplication a(argc, argv);
        QPushButton button("Hello world!", nullptr);
        button.resize(200, 100);
        button.show();
        return QApplication::exec();
    }

    Program::Program(int argc, char **argv) : argc(argc), argv(argv) {

    }


} // project