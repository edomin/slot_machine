#include "game/button.hpp"

#include "utils.hpp"

namespace game {

Button::Button(Mouse &_mouse, const Point &coords, const std::string &_text)
: mouse(&_mouse)
, bounds(coords.x, coords.y, get_text_width(_text), get_text_height(_text))
, text(_text) {}

bool Button::howered() {
    Point mouse_pos = mouse->get_pos();

    return (mouse_pos.x >= static_cast<int>(bounds.x)) &&
     (mouse_pos.x <= static_cast<int>(bounds.x + bounds.width)) &&
     (mouse_pos.y >= static_cast<int>(bounds.y)) &&
     (mouse_pos.y <= static_cast<int>(bounds.y + bounds.height));
}

bool Button::clicked() {
    return howered() && mouse->lmb_press();
}

std::string *Button::get_text() {
    return &text;
}

Point Button::get_pos() {
    return Point{static_cast<int>(bounds.x), static_cast<int>(bounds.y)};
}

} /* game:: */
