#include <QApplication>
#include <QPushButton>

#include "AppStartup.hpp"

int main(int argc, char *argv[]) {
    try {
        AppStartup::initializeAppStartup();
        QApplication::exec();
    }
    catch (const std::exception &e) {
        // write a stack trace before crashing the app
        throw e;
    }

    return EXIT_SUCCESS;
}
