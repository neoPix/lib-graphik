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
    protected:
        std::string load(const std::string& shader);
        unsigned int create(const std::string& text, unsigned int type);
        void check(unsigned int shader, unsigned int flag, bool isProgram, const std::string& errorMessage);
    private:
        void* m_data;
    };
}

#endif