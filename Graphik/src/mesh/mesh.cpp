#include <GL/glew.h>
#include "mesh/mesh.h"
#include <glm/vec3.hpp>
#include <glm/vec2.hpp>
#include <vector>

enum {
    POSITION_VB,
    TEXTCOORD_VB,
    NUM_BUFFERS
};

struct MeshData {
public :
    unsigned int m_vertexArrayObject;
    unsigned int m_vertexArrayBuffer[NUM_BUFFERS];
    unsigned int m_drawCount;
};

Graphik::Mesh::Mesh(Vertex* vertices, unsigned int count)
    : m_data(nullptr)
{
    MeshData* data = new MeshData();
    data->m_drawCount = count;
    this->m_data = data;
    
    std::vector<glm::vec3> positions;
    std::vector<glm::vec2> textcoords;
    
    positions.reserve(count);
    textcoords.reserve(count);
    
    for(int i = 0; i < count; i++) {
        positions.push_back(*vertices[i].pos());
        textcoords.push_back(*vertices[i].texCoord());
    }
    
    glGenVertexArrays(1, &data->m_vertexArrayObject);
    glBindVertexArray(data->m_vertexArrayObject);

    glGenBuffers(NUM_BUFFERS, data->m_vertexArrayBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, data->m_vertexArrayBuffer[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, count * sizeof(positions[0]), &positions[0], GL_STATIC_DRAW);
    
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    
    glBindBuffer(GL_ARRAY_BUFFER, data->m_vertexArrayBuffer[TEXTCOORD_VB]);
    glBufferData(GL_ARRAY_BUFFER, count * sizeof(textcoords[0]), &textcoords[0], GL_STATIC_DRAW);
    
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, 0);
    
    glBindVertexArray(0);
}

Graphik::Mesh::~Mesh() {
    MeshData* data = static_cast<MeshData*>(this->m_data);
    
    glDeleteBuffers(NUM_BUFFERS, data->m_vertexArrayBuffer);
    glDeleteVertexArrays(1, &data->m_vertexArrayObject);
    delete data;
    this->m_data = nullptr;
}

void Graphik::Mesh::draw() {
    MeshData* data = static_cast<MeshData*>(this->m_data);
    
    glBindVertexArray(data->m_vertexArrayObject);
    glDrawArrays(GL_TRIANGLES, 0, data->m_drawCount);
    glBindVertexArray(0);
}