#pragma once

class MainState : public Graphik::State {
public:
    MainState(Graphik::Context *ctx);
    virtual ~MainState();

    void init();
    bool update();
    void draw() const;
    void end();
private:
    Graphik::Context *m_ctx;
    Graphik::Mesh *m_mesh, *m_mesh2;
    Graphik::Shader *m_shader;
    Graphik::Object *m_object, *m_object2, *m_object3;
    Graphik::Texture *m_texture;
    Graphik::Material *m_material;
};
