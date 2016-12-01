#ifndef SHADER
#define SHADER

#include <string>

namespace Graphik
{
    class Shader
    {
    public: 
        Shader(const std::string& shader);
        virtual ~Shader();
        
        void bind();
    private:
        void* m_data;
    };
}

#endif