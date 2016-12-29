#ifndef OBJECT
#define OBJECT

#include "mesh/mesh.h"
#include "shader/shader.h"
#include "texture/material.h"
#include "camera/camera.h"

namespace Graphik
{
    class Object
    {
    public: 
        Object();
        virtual ~Object();
        
        void draw(const Camera& cam);
        
        const Mesh* mesh();
        Object* mesh(Mesh* mesh);
        
        const Shader* shader();
        Object* shader(Shader* mesh);
        
        const Material* material();
        Object* material(Material* material);
        
        Transform& transform();
        Object* transform(const Transform& transform);
        
    private:
        Mesh *m_mesh;
        Shader *m_shader;
        Material *m_material;
        Transform m_transform;
    };
}
#endif