#include <iostream>
#include <fstream>
#include <GL/glew.h>

#include "shader/shader.h"

const unsigned int NUM_SHADERS = 2;

struct ShaderData {
public :
    unsigned int m_program;
    unsigned int m_shaders[NUM_SHADERS];
};

Graphik::Shader::Shader(const std::string& shader) {
    ShaderData* data = new ShaderData();
    this->m_data = data;
    
    data->m_program = glCreateProgram();
    data->m_shaders[0] = this->create(this->load(shader + ".vs"), GL_VERTEX_SHADER);
    data->m_shaders[1] = this->create(this->load(shader + ".fs"), GL_FRAGMENT_SHADER);

    for(unsigned int i = 0; i < NUM_SHADERS; i++)
        glAttachShader(data->m_program, data->m_shaders[i]);

    glBindAttribLocation(data->m_program, 0, "position");
    glBindAttribLocation(data->m_program, 1, "texCoord");
    glBindAttribLocation(data->m_program, 2, "normal");
    
    glLinkProgram(data->m_program);
    this->check(data->m_program, GL_LINK_STATUS, true, "Error linking shader program");
    
    glValidateProgram(data->m_program);
    this->check(data->m_program, GL_LINK_STATUS, true, "Invalid shader program");
}

Graphik::Shader::~Shader() {
    ShaderData* data = static_cast<ShaderData*>(this->m_data);
    
    for(unsigned int i = 0; i < NUM_SHADERS; i++)
    {
        glDetachShader(data->m_program, data->m_shaders[i]);
        glDeleteShader(data->m_shaders[i]);
    }

    glDeleteProgram(data->m_program);
    
    delete data;
}

void Graphik::Shader::bind() {
    ShaderData* data = static_cast<ShaderData*>(this->m_data);
    glUseProgram(data->m_program);
}

std::string Graphik::Shader::load(const std::string& shader)
{
    std::ifstream file;
    file.open((shader).c_str());

    std::string output;
    std::string line;

    if(file.is_open())
    {
        while(file.good())
        {
            getline(file, line);
            output.append(line + "\n");
        }
    }
    else
    {
        std::cerr << "Unable to load shader: " << shader << std::endl;
    }

    return output;
}

unsigned int Graphik::Shader::create(const std::string& text, unsigned int type)
{
    GLuint shader = glCreateShader(type);

    if(shader == 0)
        std::cerr << "Error compiling shader type " << type << std::endl;

    const GLchar* p[1];
    p[0] = text.c_str();
    GLint lengths[1];
    lengths[0] = text.length();

    glShaderSource(shader, 1, p, lengths);
    glCompileShader(shader);

    this->check(shader, GL_COMPILE_STATUS, false, "Error compiling shader!");

    return shader;
}

void Graphik::Shader::check(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage)
{
    GLint success = 0;
    GLchar error[1024] = { 0 };

    if(isProgram)
        glGetProgramiv(shader, flag, &success);
    else
        glGetShaderiv(shader, flag, &success);

    if(success == GL_FALSE)
    {
        if(isProgram)
            glGetProgramInfoLog(shader, sizeof(error), NULL, error);
        else
            glGetShaderInfoLog(shader, sizeof(error), NULL, error);

        std::cerr << errorMessage << ": '" << error << "'" << std::endl;
    }
}