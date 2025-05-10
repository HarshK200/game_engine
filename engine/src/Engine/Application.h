#pragma once

namespace Engine {
    class Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // THIS IS TO BE DEFINED BY THE CLIENT
    Application* CreateApplication();
}
