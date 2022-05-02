#ifndef SRC_GAME_STATE_ROLLING_HPP
#define SRC_GAME_STATE_ROLLING_HPP

#include "game/button.hpp"
#include "game/ctx.hpp"
#include "game/istate.hpp"

namespace game {

class StateRolling: public IState {
    private:
        Ctx   *ctx;
        Button btn_stop;

    public:
        StateRolling(Ctx &_ctx);
        ~StateRolling() override;

        bool update(float delta) override;
        void render() override;
};

} /* game */

#endif /* SRC_GAME_STATE_ROLLING_HPP */
