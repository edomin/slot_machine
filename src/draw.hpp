#ifndef SRC_DRAW_HPP
#define SRC_DRAW_HPP

#include "color.hpp"
#include "point.hpp"
#include "sprite.hpp"
#include "window.hpp"

class Draw {
    private:
        Window *window;

    public:
        Draw(Window &_window);

        void put_sprite(Sprite &sprite, const Point &pos);
        void put_text(const std::string &text, const Color &color,
         const Point &pos);

        void clear(const Color &color);
        void rect(const Color &color, const Rect &rect);
        void fill_rect(const Color &color, const Rect &rect);
};

#endif /* SRC_DRAW_HPP */
