//
// Created by ash on 23.11.22.
//

#include "Program.h"
#include "main_window.h"

namespace calculator {
    int Program::Run() {
        QApplication a(argc, argv);
        QMainWindow window;
        calculator::main_window form(&window);
        form.show();
        return QApplication::exec();
    }

    Program::Program(int argc, char **argv) : argc(argc), argv(argv) {

    }


} // calculator