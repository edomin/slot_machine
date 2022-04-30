#ifndef SRC_SPRITE_HPP
#define SRC_SPRITE_HPP

#include "rect.hpp"
#include "texture.hpp"

class Sprite {
    private:
        Texture *texture;
        Rect     clip;

    public:
        Sprite(Texture &_texture, const Rect &_clip);

        Texture *get_texture();
        Rect get_clip();
};

#endif /* SRC_SPRITE_HPP */
