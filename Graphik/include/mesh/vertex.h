#ifndef VERTEX
#define VERTEX

#include <glm/vec3.hpp>

namespace Graphik
{
    class Vertex
    {
    public:
        Vertex(const float x, const float y, const float z) {
            this->pos.x = x;
            this->pos.y = y;
            this->pos.z = z;
        }
    private:
        glm::vec3 pos;
    };
}
#endif