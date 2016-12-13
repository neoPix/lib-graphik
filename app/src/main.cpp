#include "main.h"
#include <iostream>

using namespace Graphik;

int app() {
    Context ctx(800,600, "Hey");
    MainState state(&ctx);
    
    ctx.stateManager().change(state);

	unsigned long timer = 0;

    while(!ctx.isClosed()) {
        ctx.update();
		timer ++;
		if(timer == 100) {
			timer = 0;
			std::cout << ctx.timeManager().fps() << "fps"  << std::endl;
		}
    }

    return 0;
}

int main()
{
    int status = app();
    
    if(MemoryCounter::Leaking()) {
        std::cerr << "The app memory is leacking" << std::endl;
        std::cerr << MemoryCounter::Diff() << " remaining" << std::endl;
    }
    else {
        std::cout << MemoryCounter::Diff() << " remaining" << std::endl;
    }
   
    return status;
}