#pragma once

extern Engine::Application *Engine::CreateApplication();

#ifdef ENGINE_PLATFORM_LINUX
int main(int argc, char **argv) {
    auto app = Engine::CreateApplication();
    app->Run();
    delete app;

    return 0;
}
#endif
