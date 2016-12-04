#ifndef VERTEX
#define VERTEX

#include <glm/vec3.hpp>
#include <glm/vec2.hpp>

namespace Graphik
{
    class Vertex
    {
    public:
        Vertex(const float x, const float y, const float z, const float texX, const float texY) {
            this->m_pos.x = x;
            this->m_pos.y = y;
            this->m_pos.z = z;
            this->m_texCoord.x = texX;
            this->m_texCoord.y = texY;
        }
        inline glm::vec3& pos() {return this->m_pos;}
        inline glm::vec2& texCoord() {return this->m_texCoord;}
        
    private:
        glm::vec3 m_pos;
        glm::vec2 m_texCoord;
    };
}
#endif