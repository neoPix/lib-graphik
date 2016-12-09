#ifndef MESH
#define MESH

#include "vertex.h"
#include "indexedmodel.h"
#include <string>

namespace Graphik
{
    class Mesh
    {
    public: 
        Mesh(const std::string &path);
        virtual ~Mesh();
        
        void draw();
        
    private:
        void indexedModel(const IndexedModel &model);
        
        void* m_data;
    };
}
#endif