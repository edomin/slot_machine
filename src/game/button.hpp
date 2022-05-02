#ifndef SRC_GAME_BUTTON_HPP
#define SRC_GAME_BUTTON_HPP

#include <string>

#include "game/button.hpp"
#include "mouse.hpp"
#include "point.hpp"
#include "rect.hpp"

namespace game {

class Button {
    private:
        Mouse      *mouse;
        Rect        bounds;
        std::string text;

    public:
        Button(Mouse &_mouse, const Point &coords, const std::string &_text);

        bool howered();
        bool clicked();

        std::string *get_text();
        Point get_pos();
};

} /* game:: */

#endif /* SRC_GAME_BUTTON_HPP */
