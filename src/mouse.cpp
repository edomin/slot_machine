#include "mouse.hpp"

#include "tigr.h"

namespace {
    const int LMB_MASK = 1;
}

Mouse::Mouse(Window &_window)
: window(&_window)
, pos(0, 0)
, lmb_pressed(false)
, lmb_prev_pressed(false) {}

void Mouse::update() {
    int buttons;

    tigrMouse(window->get_tigr_window(), &pos.x, &pos.y, &buttons);

    lmb_prev_pressed = lmb_pressed;
    lmb_pressed = buttons & LMB_MASK == LMB_MASK;
}

Point Mouse::get_pos() {
    return pos;
}

bool Mouse::lmb_press() {
    return lmb_pressed && !lmb_prev_pressed;
}
