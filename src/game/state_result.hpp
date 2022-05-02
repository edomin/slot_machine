#ifndef SRC_GAME_STATE_RESULT_HPP
#define SRC_GAME_STATE_RESULT_HPP

#include "game/button.hpp"
#include "game/ctx.hpp"
#include "game/istate.hpp"

namespace game {

class StateResult: public IState {
    private:
        Ctx  *ctx;
        float cooldown;

    public:
        StateResult(Ctx &_ctx);
        ~StateResult() override;

        bool update(float delta) override;
        void render() override;
};

} /* game */

#endif /* SRC_GAME_STATE_RESULT_HPP */
