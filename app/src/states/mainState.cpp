#include "../main.h"
#include <iostream>

MainState::MainState(Graphik::Context *ctx) : m_ctx(ctx) {
}

MainState::~MainState() {
	this->end();
}

void MainState::init() {
    this->m_mesh = new Graphik::Mesh("./../res/juliet.obj");
    this->m_mesh2 = new Graphik::Mesh("./../res/suzane.obj");
    this->m_shader = new Graphik::Shader("./../res/default");
    this->m_texture = new Graphik::Texture("./../res/bricks.jpg");
    this->m_object = new Graphik::Object();
    this->m_object2 = new Graphik::Object();
    this->m_object3 = new Graphik::Object();

    this->m_object->mesh(this->m_mesh)
                    ->shader(this->m_shader)
                    ->texture(this->m_texture);
    glm::vec3 half(.5);
    this->m_object2->mesh(this->m_mesh2)
                    ->shader(this->m_shader)
                    ->texture(this->m_texture)
                    ->transform().scale(half);
					
	this->m_object3->mesh(this->m_mesh)
                    ->shader(this->m_shader)
                    ->texture(this->m_texture);
}

void MainState::end() {
    delete this->m_object;
    delete this->m_object2;
    delete this->m_object3;
    delete this->m_mesh;
    delete this->m_mesh2;
    delete this->m_shader;
    delete this->m_texture;
}

float counter = 0.f;

bool MainState::update() {
    float sinCounter = sinf(counter),
        cosCounter = cosf(counter);

    glm::vec3 scale(cosCounter);

    this->m_object->transform().pos().x = sinCounter;
    this->m_object->transform().rot().y = counter * 10;
    this->m_object->transform().rot().x = cosCounter;
    this->m_object->transform().rot().z = sinCounter;
    
    this->m_object2->transform().pos().x = -sinCounter;
    this->m_object2->transform().rot().x = -cosCounter;
    this->m_object2->transform().rot().z = -sinCounter;
	
	this->m_object3->transform().rot().y = counter * 10;
	this->m_object3->transform().pos().z = sinCounter * 4;
	
	glm::vec4 ambiant(cosCounter, sinCounter, 1, 1);
	
	this->m_camera.ambiant(ambiant);

    counter += 0.0025f;

    return true;
}

void MainState::draw() const {
    this->m_ctx->clear(0,0,0,1);
    this->m_object->draw(this->m_camera);
    this->m_object2->draw(this->m_camera);
    this->m_object3->draw(this->m_camera);
}