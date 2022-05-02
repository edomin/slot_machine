#ifndef SRC_GAME_STATE_IDLE_HPP
#define SRC_GAME_STATE_IDLE_HPP

#include "game/button.hpp"
#include "game/ctx.hpp"
#include "game/istate.hpp"

namespace game {

class StateIdle: public IState {
    private:
        Ctx   *ctx;
        Button btn_start;

    public:
        StateIdle(Ctx &_ctx);
        ~StateIdle() override;

        bool update(float delta) override;
        void render() override;
};

} /* game */

#endif /* SRC_GAME_STATE_IDLE_HPP */
