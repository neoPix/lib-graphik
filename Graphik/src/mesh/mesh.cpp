#include <GL/glew.h>
#include <glm/vec3.hpp>
#include <glm/vec2.hpp>
#include <vector>

#include "mesh/mesh.h"
#include "./loaders/Loader_OBJ.h"

enum {
    POSITION_VB,
    TEXTCOORD_VB,
    NORMAL_VB,
    INDEX_VB,
    NUM_BUFFERS
};

struct MeshData {
public :
    unsigned int m_vertexArrayObject;
    unsigned int m_vertexArrayBuffer[NUM_BUFFERS];
    unsigned int m_drawCount;
};

Graphik::Mesh::Mesh(const std::string &path) {
    Graphik::IndexedModel model = OBJModel(path).ToIndexedModel();
    this->indexedModel(model);
}

void Graphik::Mesh::indexedModel(const Graphik::IndexedModel &model) {
    
    MeshData* data = new MeshData();
    data->m_drawCount = model.indices.size();
    this->m_data = data;
    
    glGenVertexArrays(1, &data->m_vertexArrayObject);
    glBindVertexArray(data->m_vertexArrayObject);

    glGenBuffers(NUM_BUFFERS, data->m_vertexArrayBuffer);
	
    glBindBuffer(GL_ARRAY_BUFFER, data->m_vertexArrayBuffer[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.positions.size() * sizeof(model.positions[0]), &model.positions[0], GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    
    glBindBuffer(GL_ARRAY_BUFFER, data->m_vertexArrayBuffer[TEXTCOORD_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.texCoords.size() * sizeof(model.texCoords[0]), &model.texCoords[0], GL_STATIC_DRAW);
	glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, 0);
	
	glBindBuffer(GL_ARRAY_BUFFER, data->m_vertexArrayBuffer[NORMAL_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.normals.size() * sizeof(model.normals[0]), &model.normals[0], GL_STATIC_DRAW);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 0, 0);
    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, data->m_vertexArrayBuffer[INDEX_VB]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, model.indices.size() * sizeof(model.indices[0]), &model.indices[0], GL_STATIC_DRAW);
    
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
    glDrawElements(GL_TRIANGLES, data->m_drawCount, GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}