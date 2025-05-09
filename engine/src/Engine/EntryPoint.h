#pragma once

#ifdef ENGINE_PLATFORM_LINUX
int main(int argc, char** argv) {
    Sandbox *s = new Sandbox();
    s->Run();
    delete s;

    return 0;
}
#endif
