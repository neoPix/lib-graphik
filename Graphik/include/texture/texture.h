#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>
#include <glm/glm.hpp>
#include "stream/loadable.h"

namespace Graphik {
class Texture : Loadable<Texture>
{
    public:
        Texture();
        Texture(const std::string &path);
        virtual ~Texture();

        void bind(unsigned int unit = 0);
        
        bool load(const std::string& path);

        const glm::ivec2 size();

    protected:
    private:
        void* m_data;
        glm::ivec2 m_size;
};
}
#endif // TEXTURE_H