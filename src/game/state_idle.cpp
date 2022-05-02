#include "game/state_idle.hpp"

#include "game/states_common.hpp"

namespace game {

StateIdle::StateIdle(Ctx &_ctx)
: ctx(&_ctx)
, btn_start(ctx->mouse, stscmn::BTN_START_COORDS, stscmn::BTN_START_TEXT) {}

StateIdle::~StateIdle() {}

bool StateIdle::update(float delta) {
    if (btn_start.clicked()) {
        ctx->audioplayer.play(*(ctx->res_keeper.get_sound("play")));
        ctx->drums_mgr.roll();

        return false;
    }

    return true;
}

void StateIdle::render() {
    ctx->draw.clear({0x000000FF});

    ctx->draw.put_text(*(btn_start.get_text()),
     btn_start.howered() ? stscmn::BTN_HOWERED_COLOR : stscmn::BTN_UNHOWERED_COLOR,
     btn_start.get_pos());

    ctx->draw.put_text(stscmn::BTN_STOP_TEXT, stscmn::BTN_UNHOWERED_COLOR,
     stscmn::BTN_STOP_COORDS);

    // if (ctx->win)
    //     ctx->draw.put_text(stscmn::LABEL_WIN_TEXT, stscmn::LABEL_COLOR,
    //      stscmn::LABEL_WIN_COORDS);

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
