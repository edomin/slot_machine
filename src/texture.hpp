#ifndef SRC_TEXTURE_HPP
#define SRC_TEXTURE_HPP

#include <string>

#include "tigr.h"

class Texture {
    private:
        Tigr *bitmap;

    public:
        Texture(const std::string &filename);
        ~Texture();

        Tigr *get_tigr_bitmap();
};

#endif /* SRC_TEXTURE_HPP */
