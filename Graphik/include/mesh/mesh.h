#ifndef MESH
#define MESH

#include "vertex.h"

namespace Graphik
{
    class Mesh
    {
    public: 
        Mesh(Vertex* vertices, unsigned int count);
        virtual ~Mesh();
        
        void draw();
        
    private:
        void* m_data;
    };
}
#endif