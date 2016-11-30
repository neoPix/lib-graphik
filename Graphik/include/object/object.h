#ifndef OBJECT
#define OBJECT

#include "mesh/mesh.h"
#include "shader/shader.h"

namespace Graphik
{
    class Object
    {
    public: 
        Object();
        virtual ~Object();
        
        void draw();
        
        const Mesh* mesh();
        Object* mesh(Mesh* mesh);
        
        const Shader* shader();
        Object* shader(Shader* mesh);
        
    private:
        Mesh *m_mesh;
        Shader *m_shader;
    };
}
#endif