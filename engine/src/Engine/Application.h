#pragma once
#include "Core.h"

namespace Engine {
    class ENGINE_API Application {
    public:
        Application();

        virtual ~Application();

        void Run();
    };

    // THIS IS TO BE DEFINED BY THE CLIENT
    Application *CreateApplication();
}
