#ifndef SRC_GAME_CTX_HPP
#define SRC_GAME_CTX_HPP

#include "audioplayer.hpp"
#include "game/drums_mgr.hpp"
#include "game/res_keeper.hpp"
#include "draw.hpp"
#include "mouse.hpp"
#include "timer.hpp"
#include "window.hpp"

namespace game {

class Ctx {
    public:
        Window      window;
        Timer       timer;
        Draw        draw;
        Audioplayer audioplayer;
        Mouse       mouse;
        ResKeeper   res_keeper;
        DrumsMgr    drums_mgr;
        bool        win;

        Ctx();
};

} /* game:: */

#endif /* SRC_GAME_CTX_HPP */
