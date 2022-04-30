#ifndef SRC_GAME_GAME_HPP
#define SRC_GAME_GAME_HPP

#include "audioplayer.hpp"
#include "game/res_keeper.hpp"
#include "draw.hpp"
#include "mouse.hpp"
#include "timer.hpp"
#include "window.hpp"

namespace game {

class Game {
    private:
        Window      window;
        Timer       timer;
        Draw        draw;
        Audioplayer audioplayer;
        Mouse       mouse;
        ResKeeper   res_keeper;

    public:
        Game();
};

} /* game:: */

#endif /* SRC_GAME_GAME_HPP */
