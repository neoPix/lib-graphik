#include "../main.h"

MainState::MainState(Graphik::Context *ctx) : m_ctx(ctx)
{
    Graphik::Vertex vertices[] = {Graphik::Vertex(-0.5,-0.5,0,0,0),Graphik::Vertex(0,0.5,0,0.5,1),Graphik::Vertex(0.5,-0.5,0,1,0)};
    this->m_mesh = new Graphik::Mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));
    this->m_shader = new Graphik::Shader("./../res/default");
    this->m_texture = new Graphik::Texture("./../res/bricks.jpg");
    this->m_object = new Graphik::Object();
    
    this->m_object->mesh(this->m_mesh)
                    ->shader(this->m_shader)
                    ->texture(this->m_texture);
}

MainState::~MainState() {
    delete this->m_object;
    delete this->m_mesh;
    delete this->m_shader;
    delete this->m_texture;
}

void MainState::init(){
}

float counter = 0.f;

bool MainState::update() {
    
    float sinCounter = sinf(counter),
        cosCounter = cosf(counter);
    
    glm::vec3 scale(cosCounter);
    
    this->m_object->transform().pos().x = sinCounter;
    this->m_object->transform().rot().x = counter * 10;
    this->m_object->transform().rot().z = counter * 25;
    this->m_object->transform().scale(scale);
    
    counter += 0.0025f;
    
    return true;
}

void MainState::draw() {
    this->m_ctx->clear(0,0,0,1);
    this->m_object->draw();
}