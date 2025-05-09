#include "Application.h"

#include <iostream>
#include <ostream>

namespace Engine {
    Application::Application() {
    }

    Application::~Application() {
    }

    void Application::Run() {
        while (true) {
            std::cout << std::endl << "Running..." << std::endl;
        }
    }
}
