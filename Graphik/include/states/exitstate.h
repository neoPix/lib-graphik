#ifndef EXIT_STATE_H
#define EXIT_STATE_H

namespace Graphik {
class ExitState : State
{
    public:
        virtual void init() {}
        virtual bool update() { return false; }
        virtual void draw() {}
        virtual void exit() {}
    protected:
    private:
};
}

#endif // STATE_H