#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
#include "states/statemanager.h"
#include "timemanager.h"

namespace Graphik {
class Context
{
public:
    Context(int width, int height, const std::string& name);
    virtual ~Context();

    void update();
    void clear(float r=0, float g=0, float b=0, float a=1);
    bool isClosed() { return this->m_quit; };

    StateManager& stateManager();
    TimeManager& timeManager();
	
	const glm::ivec2 size();
	Context& size(glm::ivec2 &size);

protected:
    StateManager p_stateManager;
    TimeManager p_timeManager;
private:
    void *m_window;
    void *m_context;
    bool m_quit;
};
}
#endif // WINDOW_H