#include "main.h"
#include <iostream>

using namespace Graphik;

int app() {
    Context ctx(800,600, "Hey");
    MainState state(&ctx);
    
    ctx.stateManager().change(state);

    while(!ctx.isClosed()) {
        ctx.update();
    }

    return 0;
}

int main()
{
    int status = app();
    
    unsigned long a = 0;
    a -= 1;
    
    std::cerr << a << std::endl;
    
    if(MemoryCounter::Leaking()) {
        std::cerr << "The app memory is leacking" << std::endl;
        std::cerr << MemoryCounter::Diff() << " remaining" << std::endl;
    }
    else {
        std::cout << MemoryCounter::Diff() << " remaining" << std::endl;
    }
   
    return status;
}