#include "states/state.h"

Graphik::State::State() : m_camera(glm::vec3(0,0,-4), 70.f, (float)800/600, .01f, 1000.f)
{
}

Graphik::State::~State()
{
}


const Graphik::Camera& Graphik::State::camera() {
    return m_camera;
}
