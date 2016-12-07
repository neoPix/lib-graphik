#ifndef STATE_H
#define STATE_H

#include "camera/camera.h"

namespace Graphik {
class State
{
    public:
        State();
        virtual ~State();

        virtual void init() = 0;
        virtual bool update() = 0;
        virtual void draw() = 0;
        virtual void exit() = 0;
        
        const Camera& camera();
    protected:
        Camera m_camera;
    private:
};
}

#include "exitstate.h"

#endif // STATE_H