#include "camera/camera.h"
#include <glm/gtx/transform.hpp>

Graphik::Camera::Camera(const glm::vec3& pos, float fov, float aspect, float near, float far) {
    this->m_perspective = glm::perspective(fov, aspect, near, far);
    this->m_position = pos;
    this->m_forward = glm::vec3(0, 0, 1);
    this->m_up = glm::vec3(0, 1, 0);
}

Graphik::Camera::~Camera() {
    
}

glm::mat4 Graphik::Camera::projection() const {
    return this->m_perspective * glm::lookAt(this->m_position, this->m_position + this->m_forward, this->m_up);
}