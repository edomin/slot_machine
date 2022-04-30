#include "color.hpp"

namespace {
    const uint32_t RED_MASK   = 0xFF000000u;
    const uint32_t GREEN_MASK = 0x00FF0000u;
    const uint32_t BLUE_MASK  = 0x0000FF00u;
    const uint32_t ALPHA_MASK = 0x000000FFu;

    const unsigned RED_BITS_OFFSET   = 24u;
    const unsigned GREEN_BITS_OFFSET = 16u;
    const unsigned BLUE_BITS_OFFSET  =  8u;
}

Color::Color(uint32_t rgba)
: color() {
    color.r = (rgba & RED_MASK  ) >> RED_BITS_OFFSET;
    color.g = (rgba & GREEN_MASK) >> GREEN_BITS_OFFSET;
    color.b = (rgba & BLUE_MASK ) >> BLUE_BITS_OFFSET;
    color.a =  rgba & ALPHA_MASK;
}

TPixel Color::get_tigr_color() const {
    return color;
}
