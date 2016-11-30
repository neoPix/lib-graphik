#include "Graphik.h"

Graphik::StateManager::StateManager() : m_state(nullptr)
{
}

Graphik::StateManager::~StateManager()
{
    if(this->m_state) {
        this->m_state->exit();
        this->m_state = nullptr;
    }
}

void Graphik::StateManager::change(State &state) {
    if(this->m_state) {
        this->m_state->exit();
    }
    this->m_state = &state;
    this->m_state->init();
}

bool Graphik::StateManager::update() {
    if(this->m_state) {
        if(!this->m_state->update()) {
            this->m_state->exit();
            this->m_state = nullptr;
        }
        else {
            this->m_state->draw();
            return true;
        }
    }
    return false;
}