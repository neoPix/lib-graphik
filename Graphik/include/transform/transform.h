#ifndef TRANSFORM_H
#define TRANSFORM_H

#include <glm/glm.hpp>

namespace Graphik {
class Transform
{
    public:
        Transform();
        virtual ~Transform();
        
        glm::vec3 &pos();
        glm::vec3 &rot();
        glm::vec3 &scale();

        Transform* pos(glm::vec3 &pos);
        Transform* rot(glm::vec3 &rot);
        Transform* scale(glm::vec3 &scale);
        
        glm::mat4 matrix() const;
        
    protected:
    private:
        void* m_data;
};
}
#endif // TEXTURE_H