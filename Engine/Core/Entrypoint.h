#include "Application.h"

extern Bake::Application* Bake::CreateApplication();

int main() {
    auto app = Bake::CreateApplication();
    app->Run();
    delete app;

    return 0;
}