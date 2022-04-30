#include "draw.hpp"

#include "tigr.h"

Draw::Draw(Window &_window)
: window(&_window) {}

void Draw::put_sprite(Sprite &sprite, const Point &pos) {
    Rect clip = sprite.get_clip();

    tigrBlit(window->get_tigr_window(),
     sprite.get_texture()->get_tigr_bitmap(), pos.x, pos.y, clip.x, clip.y,
     clip.width, clip.height);
}

void Draw::put_text(const std::string &text, const Color &color,
 const Point &pos) {
    tigrPrint(window->get_tigr_window(), tfont, pos.x, pos.y,
     color.get_tigr_color(), "%s", text.c_str());
}

void Draw::clear(const Color &color) {
    tigrClear(window->get_tigr_window(), color.get_tigr_color());
}

void Draw::rect(const Color &color, const Rect &rect) {
    tigrRect(window->get_tigr_window(), rect.x, rect.y, rect.width,
     rect.height, color.get_tigr_color());
}

void Draw::fill_rect(const Color &color, const Rect &rect) {
    tigrFillRect(window->get_tigr_window(), rect.x, rect.y, rect.width,
     rect.height, color.get_tigr_color());
}
