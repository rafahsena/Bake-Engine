#include <Bake.h>

class Sandbox : public Bake::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }
};

Bake::Application* Bake::CreateApplication() {
    return new Sandbox();
}