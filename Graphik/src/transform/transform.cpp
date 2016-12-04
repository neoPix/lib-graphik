#include <glm/gtx/transform.hpp>
#include "transform/transform.h"

struct TransformData {
    TransformData (const glm::vec3& pos = glm::vec3(),
        const glm::vec3& rot = glm::vec3(),
        const glm::vec3& scale = glm::vec3(1.f)) 
        : m_pos(pos), m_rot(rot), m_scale(scale) 
    {};
    
    glm::vec3 m_pos, m_rot, m_scale;
};

Graphik::Transform::Transform() {
    TransformData* data = new TransformData();
    this->m_data = data;
}
 
Graphik::Transform::~Transform() {
    TransformData* data = static_cast<TransformData*>(this->m_data);
    delete data;
}

glm::mat4 Graphik::Transform::matrix() const {
    TransformData* data = static_cast<TransformData*>(this->m_data);
    glm::mat4 posMatrix = glm::translate(data->m_pos);
    glm::mat4 rotationMatrixX = glm::rotate(data->m_rot.x, glm::vec3(1,0,0));
    glm::mat4 rotationMatrixY = glm::rotate(data->m_rot.y, glm::vec3(0,1,0));
    glm::mat4 rotationMatrixZ = glm::rotate(data->m_rot.z, glm::vec3(0,0,1));
    glm::mat4 scaleMatrix = glm::scale(data->m_scale);
    
    glm::mat4 rotationMatrix = rotationMatrixZ * rotationMatrixY * rotationMatrixX;
    
    return posMatrix * rotationMatrix * scaleMatrix;
}

glm::vec3 &Graphik::Transform::pos() {
    return static_cast<TransformData*>(this->m_data)->m_pos;
}
glm::vec3 &Graphik::Transform::rot() {
    return static_cast<TransformData*>(this->m_data)->m_rot;
}
glm::vec3 &Graphik::Transform::scale() {
    return static_cast<TransformData*>(this->m_data)->m_scale;
}

Graphik::Transform* Graphik::Transform::pos(glm::vec3 &pos) {
    static_cast<TransformData*>(this->m_data)->m_pos = pos;
    return this;
}
Graphik::Transform* Graphik::Transform::rot(glm::vec3 &rot) {
    static_cast<TransformData*>(this->m_data)->m_rot = rot;
    return this;
}
Graphik::Transform* Graphik::Transform::scale(glm::vec3 &scale) {
    static_cast<TransformData*>(this->m_data)->m_scale = scale;
    return this;
}