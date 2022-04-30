#include "window.hpp"

namespace {
    const int      DEFAULT_FLAGS = TIGR_FIXED | TIGR_4X;
}

Window::Window(unsigned width, unsigned height, bool fullscreen,
 const std::string &title)
: window(nullptr) {
    int flags = DEFAULT_FLAGS;

    if (fullscreen)
        flags |= TIGR_FULLSCREEN;

    window = tigrWindow(width, height, title.c_str(), flags);
}

Window::~Window() {
    tigrFree(window);
}

bool Window::closed() {
    return tigrClosed(window);
}

void Window::update() {
    tigrUpdate(window);
}

Tigr *Window::get_tigr_window() {
    return window;
}
