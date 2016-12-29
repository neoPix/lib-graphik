#include "object/object.h"
#include "transform/transform.h"

Graphik::Object::Object() : m_mesh(nullptr), m_shader(nullptr), m_material(nullptr) {
}

Graphik::Object::~Object() {
}

void Graphik::Object::draw(const Camera& cam) {
    if(this->m_shader) {
        this->m_shader->update(this->m_transform, cam);
        this->m_shader->bind();
    }
    if(this->m_material) {
        this->m_material->bind();
    }
    if(this->m_mesh) {
        this->m_mesh->draw();
    }
}

const Graphik::Mesh* Graphik::Object::mesh() {
    return this->m_mesh;
}

Graphik::Object* Graphik::Object::mesh(Graphik::Mesh* mesh) {
    this->m_mesh = mesh;
    return this;
}

const Graphik::Shader* Graphik::Object::shader() {
    return this->m_shader;
}

Graphik::Object* Graphik::Object::shader(Graphik::Shader* shader) {
    this->m_shader = shader;
    return this;
}

const Graphik::Material* Graphik::Object::material() {
    return this->m_material;
}

Graphik::Object* Graphik::Object::material(Graphik::Material* material) {
    this->m_material = material;
    return this;
}

Graphik::Transform& Graphik::Object::transform() {
    return this->m_transform;
}

Graphik::Object* Graphik::Object::transform(const Graphik::Transform& transform) {
    this->m_transform = transform;
    return this;
}