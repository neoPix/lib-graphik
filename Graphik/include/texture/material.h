#ifndef MATERIAL_H
#define MATERIAL_H

#include "texture.h"

namespace Graphik {
class Material
{
    public:
        Material(Texture *color = nullptr, Texture *normal = nullptr, Texture *specular = nullptr);
        virtual ~Material();

        Texture* color();
        Material& color(Texture *color);
        Texture* normal();
        Material& normal(Texture *normal);
        Texture* specular();
        Material& specular(Texture *specular);

        void bind();
    protected:
    private:
        Texture *m_color, *m_normal, *m_specular;
};
}
#endif // MATERIAL_H