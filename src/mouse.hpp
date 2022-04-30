#ifndef SRC_MOUSE_PP
#define SRC_MOUSE_PP

#include "point.hpp"
#include "window.hpp"

class Mouse {
    private:
        Window *window;
        Point   pos;
        bool    lmb_pressed;
        bool    lmb_prev_pressed;

    public:
        Mouse(Window &_window);

        void  update();
        Point get_pos();
        bool  lmb_press();
};

#endif /* SRC_MOUSE_PP */
