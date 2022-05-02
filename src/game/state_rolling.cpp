#include "game/state_rolling.hpp"

#include "game/states_common.hpp"

namespace game {

StateRolling::StateRolling(Ctx &_ctx)
: ctx(&_ctx)
, btn_stop(ctx->mouse, stscmn::BTN_STOP_COORDS, stscmn::BTN_STOP_TEXT) {}

StateRolling::~StateRolling() {}

bool StateRolling::update(float delta) {
    if (btn_stop.clicked())
        ctx->drums_mgr.request_stop();

    ctx->drums_mgr.update(delta);

    if (ctx->drums_mgr.is_stopped()) {
        ctx->win = ctx->drums_mgr.win();

        if (ctx->win)
            ctx->audioplayer.play(*(ctx->res_keeper.get_sound("win")));

        return false;
    }

    return true;
}

void StateRolling::render() {
    ctx->draw.clear({0x000000FF});

    ctx->draw.put_text(stscmn::BTN_START_TEXT, stscmn::BTN_UNHOWERED_COLOR,
     stscmn::BTN_START_COORDS);

    ctx->draw.put_text(*(btn_stop.get_text()),
     btn_stop.howered() ? stscmn::BTN_HOWERED_COLOR : stscmn::BTN_UNHOWERED_COLOR,
     btn_stop.get_pos());

    for (unsigned drum = 0; drum <= 2; drum++) {
        for (int row = -2; row <= 2; row++) {
            Sprite *sprite = ctx->drums_mgr.get_sprite(drum, row);

            float   icon_offset = ctx->drums_mgr.get_icon_offset(drum);

            ctx->draw.put_sprite(*sprite,
             {static_cast<int>(stscmn::DRUMS_RECTS[drum].x),
             static_cast<int>(stscmn::DRUMS_RECTS[drum].y + row * stscmn::DRUM_HEIGHT) + static_cast<int>(icon_offset)}
            );
        }
    }

    for (size_t i = 0; i < stscmn::DRUMS_COUNT; i++)
        ctx->draw.rect(stscmn::DRUMS_RECTS_COLOR, stscmn::DRUMS_RECTS[i]);
}

} /* game:: */
