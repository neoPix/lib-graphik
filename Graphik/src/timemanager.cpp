#include <chrono>

#include "timemanager.h"

unsigned long getCurrentTime()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

Graphik::TimeManager::TimeManager() : m_appTime(0), m_renderDuration(0), m_started(0), m_frameNumber(0)
{
    this->m_started = getCurrentTime();
    this->m_appTime = this->m_started;
}

Graphik::TimeManager::~TimeManager() {
}

void Graphik::TimeManager::update()
{
    unsigned long now = getCurrentTime();
	this->m_frameNumber ++;
    this->m_renderDuration = now - this->m_appTime;
    this->m_appTime = now;
}

float Graphik::TimeManager::fps()
{
    return 1000 / this->m_renderDuration;
}

float Graphik::TimeManager::renderDuration() 
{
    return .0001f * this->m_renderDuration;
}

float Graphik::TimeManager::now() 
{
    return .0001f * getCurrentTime();
}
