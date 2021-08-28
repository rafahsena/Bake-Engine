//
// Created by rafahsena on 28/08/2021.
//

#ifndef SANDBOX_APPLICATION_H
#define SANDBOX_APPLICATION_H


namespace Bake {
    class Application {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application* CreateApplication();
}



#endif //SANDBOX_APPLICATION_H
