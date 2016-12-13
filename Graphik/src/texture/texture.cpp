#include <GL/glew.h>
#include <cassert>
#include <iostream>
#include "texture/texture.h"
#include "loaders/stb_image.h"

struct TextureData {
public:
    unsigned int m_texture;
};

Graphik::Texture::Texture(const std::string &path) {
    TextureData* data = new TextureData();
    this->m_data = data;
    
    int numComponents;
    unsigned char* imageData = stbi_load(path.c_str(), &this->m_size.x, &this->m_size.y, &numComponents, 4);
	
    
    if(imageData == nullptr) {
        std::cerr << "Texture loading failed" << path << std::endl;
    }
    else{
        glGenTextures(1, &data->m_texture);
        glBindTexture(GL_TEXTURE_2D, data->m_texture);
        
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
            
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, this->m_size.x, this->m_size.y, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);
    }
    stbi_image_free(imageData);
}

Graphik::Texture::~Texture() {
    TextureData* data = static_cast<TextureData*>(this->m_data);
    glDeleteTextures(1, &data->m_texture);
    delete data;
}

void Graphik::Texture::bind(unsigned int unit) {
    assert(unit >= 0 && unit < 32);
    
    TextureData* data = static_cast<TextureData*>(this->m_data);
    glActiveTexture(GL_TEXTURE0 + unit);
    glBindTexture(GL_TEXTURE_2D, data->m_texture);
}

const glm::ivec2 Graphik::Texture::size() {
    return this->m_size;
}