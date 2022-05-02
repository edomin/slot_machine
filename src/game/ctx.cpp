#include "game/ctx.hpp"

namespace {
    const unsigned    WINDOW_WIDTH      = 200;
    const unsigned    WINDOW_HEIGHT     = 96;
    const bool        WINDOW_FULLSCREEN = false;
    const std::string WINDOW_TITLE      = "Slot Machine";
}

namespace game {

Ctx::Ctx()
: window(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_FULLSCREEN, WINDOW_TITLE)
, timer()
, draw(window)
, audioplayer()
, mouse(window)
, res_keeper()
, drums_mgr(res_keeper)
, win(false) {}

} /* game:: */
