#ifndef SRC_GAME_STATE_MACHINE_HPP
#define SRC_GAME_STATE_MACHINE_HPP

#include <cstddef>
#include <vector>

#include "game/ctx.hpp"
#include "game/istate.hpp"

namespace game {

class StateMachine {
    private:
        const size_t STATES_COUNT = 1;

        std::vector<IState *>           states;
        std::vector<IState *>::iterator current_state;

    public:
        StateMachine(Ctx *ctx);
        ~StateMachine();

        void update(float delta);
        void render();
};

} /* game:: */

#endif /* SRC_GAME_STATE_MACHINE_HPP */
