#pragma once

class MainState : public Graphik::State {
public:
    MainState(Graphik::Context *ctx);
    virtual ~MainState();

    virtual void init(){};
    virtual bool update() {
        return true;
    };
    virtual void draw();
    virtual void exit(){};
private:
    Graphik::Context *m_ctx;
    Graphik::Mesh *m_mesh;
    Graphik::Shader *m_shader;
    Graphik::Object *m_object;
};
