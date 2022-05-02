#ifndef SRC_GAME_GAME_HPP
#define SRC_GAME_GAME_HPP

#include "game/ctx.hpp"
#include "game/state_machine.hpp"

namespace game {

class Game {
    private:
        Ctx          ctx;
        StateMachine state_machine;

    public:
        Game();

        void main_loop();
};

} /* game:: */

#endif /* SRC_GAME_GAME_HPP */
