#include "sprite.hpp"

Sprite::Sprite(Texture &_texture, const Rect &_clip)
: texture(&_texture)
, clip(_clip) {}

Texture *Sprite::get_texture() {
    return texture;
}

Rect Sprite::get_clip() {
    return clip;
}

