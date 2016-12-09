#ifndef INDEXED_MODEL_H
#define INDEXED_MODEL_H

#include <glm/glm.hpp>
#include <vector>

namespace Graphik {
    class IndexedModel
    {
    public:
        std::vector<glm::vec3> positions;
        std::vector<glm::vec2> texCoords;
        std::vector<glm::vec3> normals;
        std::vector<unsigned int> indices;
        
        void CalcNormals();
    };
}

#endif