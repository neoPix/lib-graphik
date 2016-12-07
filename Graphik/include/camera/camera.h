#ifndef CAMERA
#define CAMERA

#include <glm/vec3.hpp>
#include <glm/matrix.hpp>

namespace Graphik
{
    class Camera
    {
    public: 
        Camera(const glm::vec3& pos, float fov, float aspect, float near, float far);
        virtual ~Camera();
        
        glm::mat4 projection() const;
        
    private:
        glm::mat4 m_perspective;
        glm::vec3 m_position;
        glm::vec3 m_forward;
        glm::vec3 m_up;
    };
}
#endif