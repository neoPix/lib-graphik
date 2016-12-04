#ifndef OBJECT
#define OBJECT

#include "mesh/mesh.h"
#include "shader/shader.h"
#include "texture/texture.h"

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
        
        const Texture* texture();
        Object* texture(Texture* texture);
        
    private:
        Mesh *m_mesh;
        Shader *m_shader;
        Texture *m_texture;
    };
}
#endif