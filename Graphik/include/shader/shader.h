#ifndef SHADER
#define SHADER

#include <string>
#include "transform/transform.h"
#include "camera/camera.h"

namespace Graphik
{
    class Shader
    {
    public: 
        Shader(const std::string& shader);
        virtual ~Shader();
        
        void bind();
        void update(const Transform& transform, const Camera& cam);
    private:
        void* m_data;
    };
}

#endif