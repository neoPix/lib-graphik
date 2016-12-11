#ifndef EXIT_STATE_H
#define EXIT_STATE_H

namespace Graphik {
class ExitState : State
{
    public:
        void init() {}
        bool update() { return false; }
        void draw() const {}
        void end() {}
    protected:
    private:
};
}

#endif // STATE_H