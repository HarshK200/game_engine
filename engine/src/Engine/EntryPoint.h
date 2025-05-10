#pragma once

extern Engine::Application *Engine::CreateApplication();

#ifdef ENGINE_PLATFORM_LINUX
int main(int argc, char **argv) {
    Engine::Log::Init();
    int var = 69;
    ENGINE_CORE_WARN("Hello from the engine logger! this is a warning of level {0}", var);
    ENGINE_CLIENT_INFO("Hello from the client logger! this is a info");

    auto app = Engine::CreateApplication();
    app->Run();
    delete app;

    return 0;
}
#endif
