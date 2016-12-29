#include "texture/material.h"

Graphik::Material::Material(Graphik::Texture *color, Graphik::Texture *normal, Graphik::Texture *specular) 
    : m_color(color), m_normal(normal), m_specular(specular) {
}

Graphik::Material::~Material() {
}

Graphik::Material& Graphik::Material::color(Texture* color) {
    this->m_color = color;
    return *(this);
}

Graphik::Material& Graphik::Material::normal(Texture* normal) {
    this->m_normal = normal;
    return *(this);
}

Graphik::Material& Graphik::Material::specular(Texture* specular) {
    this->m_specular = specular;
    return *(this);
}

Graphik::Texture* Graphik::Material::color() {
    return this->m_color;
}

Graphik::Texture* Graphik::Material::normal() {
    return this->m_normal;
}

Graphik::Texture* Graphik::Material::specular() {
    return this->m_specular;
}

void Graphik::Material::bind() {
    if(this->m_color) {
        this->m_color->bind(0);
    }
    if(this->m_normal) {
        this->m_normal->bind(1);
    }
    if(this->m_specular) {
        this->m_specular->bind(2);
    }
}