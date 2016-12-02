#include "../main.h"

MainState::MainState(Graphik::Context *ctx) : m_ctx(ctx)
{
    Graphik::Vertex vertices[] = {Graphik::Vertex(-0.5,-0.5,0),Graphik::Vertex(0,0.5,0),Graphik::Vertex(0.5,-0.5,0)};
    this->m_mesh = new Graphik::Mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));
    this->m_shader = new Graphik::Shader("./../res/default");
    //this->m_texture = new Graphik::Texture("./../res/bricks.jpg");
    this->m_object = new Graphik::Object();
    
    this->m_object->mesh(this->m_mesh)
                    ->shader(this->m_shader)
                    ->texture(this->m_texture);
}

MainState::~MainState()
{
    delete this->m_object;
    delete this->m_mesh;
    delete this->m_shader;
    delete this->m_texture;
}

void MainState::draw(){
    this->m_ctx->clear(0,0,0,1);
    this->m_object->draw();
}