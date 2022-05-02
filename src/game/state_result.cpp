#include "game/state_result.hpp"

#include "game/states_common.hpp"

namespace {
    const float COOLDOWN_TIMEOUT = 2.0f;
}

namespace game {

StateResult::StateResult(Ctx &_ctx)
: ctx(&_ctx)
, cooldown(COOLDOWN_TIMEOUT) {}

StateResult::~StateResult() {}

bool StateResult::update(float delta) {
    cooldown -= delta;

    if (cooldown <= 0) {
        cooldown = COOLDOWN_TIMEOUT;
        ctx->win = false;
        return false;
    }

    return true;
}

void StateResult::render() {
    ctx->draw.clear({0x000000FF});

    ctx->draw.put_text(stscmn::BTN_START_TEXT, stscmn::BTN_UNHOWERED_COLOR,
     stscmn::BTN_START_COORDS);

    ctx->draw.put_text(stscmn::BTN_STOP_TEXT, stscmn::BTN_UNHOWERED_COLOR,
     stscmn::BTN_STOP_COORDS);

    if ((static_cast<int>(cooldown * 10)) % 2 == 1)
        ctx->draw.put_text(ctx->win ? stscmn::LABEL_WIN_TEXT : stscmn::LABEL_FAIL_TEXT, stscmn::LABEL_COLOR,
             stscmn::LABEL_RESULT_COORDS);

    for (unsigned drum = 0; drum <= 2; drum++) {
        for (int row = -2; row <= 2; row++) {
            Sprite *sprite = ctx->drums_mgr.get_sprite(drum, row);

            ctx->draw.put_sprite(*sprite,
             {static_cast<int>(stscmn::DRUMS_RECTS[drum].x),
             static_cast<int>(stscmn::DRUMS_RECTS[drum].y + row * stscmn::DRUM_HEIGHT)}
            );
        }
    }

    for (size_t i = 0; i < stscmn::DRUMS_COUNT; i++)
        ctx->draw.rect(stscmn::DRUMS_RECTS_COLOR, stscmn::DRUMS_RECTS[i]);
}

} /* game:: */
