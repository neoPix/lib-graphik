#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>
#include <glm/glm.hpp>

namespace Graphik {
class Texture
{
    public:
        Texture(const std::string &path);
        virtual ~Texture();
        
        void bind(unsigned int unit = 0);
		
		const glm::ivec2 size();
		
    protected:
    private:
        void* m_data;
		glm::ivec2 m_size;
};
}
#endif // TEXTURE_H