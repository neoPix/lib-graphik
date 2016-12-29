#ifndef READABLE_H
#define READABLE_H

#include <string>

namespace Graphik {
template<class T> class Loadable
{
    public:
        virtual bool load(const std::string& path) = 0;
};
}

#endif // STATE_H