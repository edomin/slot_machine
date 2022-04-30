#ifndef SRC_COLOR_HPP
#define SRC_COLOR_HPP

#include <cstdint>

#include "tigr.h"

class Color {
    private:
        TPixel color;

    public:
        Color(uint32_t rgba);

        TPixel get_tigr_color() const;
};

#endif /* SRC_COLOR_HPP */
