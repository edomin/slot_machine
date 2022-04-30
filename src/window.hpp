#ifndef SRC_WINDOW_HPP
#define SRC_WINDOW_HPP

#include <string>

#include "tigr.h"

class Window {
    private:
        Tigr *window;

    public:
        Window(unsigned width, unsigned height, bool fullscreen,
         const std::string &title);
        ~Window();

        bool closed();
        void update();

        Tigr *get_tigr_window();
};

#endif /* SRC_WINDOW_HPP */
