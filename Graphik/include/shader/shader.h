#ifndef SHADER
#define SHADER

#include <string>
#include "transform/transform.h"

namespace Graphik
{
    class Shader
    {
    public: 
        Shader(const std::string& shader);
        virtual ~Shader();
        
        void bind();
        void update(const Transform& transform);
    private:
        void* m_data;
    };
}

#endif