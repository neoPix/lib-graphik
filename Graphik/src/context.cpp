#include "Graphik.h"
#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <iostream>

Graphik::Context::Context(int width, int height, const std::string& name)
    : p_stateManager(), p_timeManager(), m_window(nullptr), m_context(nullptr), m_quit(false)
{
    SDL_Init(SDL_INIT_EVERYTHING);//For now

    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE,16);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    this->m_window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);
    this->m_context = SDL_GL_CreateContext(static_cast<SDL_Window*>(this->m_window));

    GLenum status = glewInit();

    if(status != GLEW_OK) {
        std::cerr << "Error initlializing glew" << std::endl;
    }

    glEnable(GL_DEPTH_TEST);
    glCullFace(GL_BACK);
    glEnable(GL_CULL_FACE);
}

Graphik::Context::~Context()
{
    SDL_GL_DeleteContext(static_cast<SDL_GLContext*>(this->m_context));
    SDL_DestroyWindow(static_cast<SDL_Window*>(this->m_window));
    SDL_QuitSubSystem(SDL_INIT_EVERYTHING);
    SDL_Quit();
}

Graphik::StateManager& Graphik::Context::stateManager() {
    return this->p_stateManager;
}

Graphik::TimeManager& Graphik::Context::timeManager() {
    return this->p_timeManager;
}

void Graphik::Context::update() {
    this->p_timeManager.update();
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if(e.type == SDL_QUIT) {
            this->m_quit = true;
        }
    }

    if(!this->p_stateManager.update()) {
        this->m_quit = true;
    }
    
    if(!this->m_quit) {
        this->p_stateManager.draw();
        SDL_GL_SwapWindow(static_cast<SDL_Window*>(this->m_window));
    }
}

const glm::ivec2 Graphik::Context::size() {
	glm::ivec2 size(0);
	SDL_GetWindowSize(static_cast<SDL_Window*>(this->m_window), &size.x, &size.y);
	return size;
}

Graphik::Context& Graphik::Context::size(glm::ivec2 &size) {
	SDL_SetWindowSize(static_cast<SDL_Window*>(this->m_window), size.x, size.y);
	return (*this);
}

void Graphik::Context::clear(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}