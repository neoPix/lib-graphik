#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>

namespace Graphik {
class Texture
{
    public:
        Texture(const std::string &path);
        virtual ~Texture();
        
        void bind(unsigned int unit = 0);
    protected:
    private:
        void* m_data;
};
}
#endif // TEXTURE_H