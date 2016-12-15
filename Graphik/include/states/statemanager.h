#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include "state.h"

namespace Graphik {
class StateManager
{
    public:
        StateManager();
        virtual ~StateManager();
        
        void change(State &state);
        bool update();
        void draw();
        
        void resized(glm::ivec2& size);
    protected:
    private:
        State *m_state;
};
}

#endif // STATEMANAGER_H