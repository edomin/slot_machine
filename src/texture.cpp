#include "texture.hpp"

#include <cstdint>

Texture::Texture(const std::string &filename)
: bitmap(tigrLoadImage(filename.c_str())) {}

Texture::~Texture() {
    tigrFree(bitmap);
}

Tigr *Texture::get_tigr_bitmap() {
    return bitmap;
}
