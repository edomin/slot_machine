#include "game/res_keeper.hpp"

namespace {
    const unsigned FIRE_CLIP_X    =   0;
    const unsigned WATER_CLIP_X   =  32;
    const unsigned WIND_CLIP_X    =  64;
    const unsigned THUNDER_CLIP_X =  96;
    const unsigned EARTH_CLIP_X   = 128;
    const unsigned CLIP_Y         =  96;
    const int      CLIP_WIDTH     =  32;
    const int      CLIP_HEIGHT    =  32;
}

namespace game {

ResKeeper::ResKeeper()
: tex_icons("assets/Icons1.png")
, sprites()
, sounds() {
    sprites.insert({"fire",    new Sprite(tex_icons, {FIRE_CLIP_X,    CLIP_Y, CLIP_WIDTH, CLIP_HEIGHT})});
    sprites.insert({"water",   new Sprite(tex_icons, {WATER_CLIP_X,   CLIP_Y, CLIP_WIDTH, CLIP_HEIGHT})});
    sprites.insert({"wind",    new Sprite(tex_icons, {WIND_CLIP_X,    CLIP_Y, CLIP_WIDTH, CLIP_HEIGHT})});
    sprites.insert({"thunder", new Sprite(tex_icons, {THUNDER_CLIP_X, CLIP_Y, CLIP_WIDTH, CLIP_HEIGHT})});
    sprites.insert({"earth",   new Sprite(tex_icons, {EARTH_CLIP_X,   CLIP_Y, CLIP_WIDTH, CLIP_HEIGHT})});

    sounds.insert({"play",      new Sound("assets/play.wav")});
    sounds.insert({"drum_stop", new Sound("assets/drum_stop.wav")});
    sounds.insert({"win",       new Sound("assets/win.wav")});
}

ResKeeper::~ResKeeper() {
    for (auto &[_, sprite] : sprites)
        delete sprite;
    for (auto &[_, sound] : sounds)
        delete sound;
}

Sprite *ResKeeper::get_sprite(const std::string &name) {
    return sprites[name];
}

Sound *ResKeeper::get_sound(const std::string &name) {
    return sounds[name];
}

} /* game:: */
