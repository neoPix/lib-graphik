#include "camera/camera.h"
#include <glm/gtx/transform.hpp>

Graphik::Camera::Camera(const glm::vec3& pos, float fov, float aspect, float near, float far) : m_ambiant(1), m_fov(fov), m_near(near), m_far(far) {
    this->m_perspective = glm::perspective(this->m_fov, aspect, this->m_near, this->m_far);
    this->m_position = pos;
    this->m_forward = glm::vec3(0, 0, 1);
    this->m_up = glm::vec3(0, 1, 0);
}

Graphik::Camera::~Camera() {}

glm::mat4 Graphik::Camera::projection() const {
    return this->m_perspective * glm::lookAt(this->m_position, this->m_position + this->m_forward, this->m_up);
}

glm::vec4 Graphik::Camera::ambiant() const {
    return this->m_ambiant;
}

const Graphik::Camera& Graphik::Camera::ambiant(glm::vec4& ambiant) {
    this->m_ambiant = ambiant;
    return (*this);
}

void Graphik::Camera::resized(glm::ivec2& size) {
    this->m_perspective = glm::perspective(this->m_fov, (float)size.x/size.y, this->m_near, this->m_far);
}