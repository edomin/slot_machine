#include "drums_mgr.hpp"

namespace game {

DrumsMgr::DrumsMgr(ResKeeper &res_keeper)
: drums()
, icons_sprites() {
    for (size_t i = 0; i < DRUMS_COUNT; i++)
        drums.push_back(new Drum());

    icons_sprites.insert({Drum::icon_t::FIRE, res_keeper.get_sprite("fire")});
    icons_sprites.insert(
     {Drum::icon_t::WATER, res_keeper.get_sprite("water")});
    icons_sprites.insert({Drum::icon_t::WIND, res_keeper.get_sprite("wind")});
    icons_sprites.insert(
     {Drum::icon_t::THUNDER, res_keeper.get_sprite("thunder")});
    icons_sprites.insert(
     {Drum::icon_t::EARTH, res_keeper.get_sprite("earth")});
}

DrumsMgr::~DrumsMgr() {
    for (Drum *drum : drums)
        delete drum;
}

void DrumsMgr::roll() {
    for (Drum *drum : drums)
        drum->roll();
}

void DrumsMgr::update(float delta) {
    for (Drum *drum : drums)
        drum->update(delta);
}

bool DrumsMgr::is_stopped() {
    for (Drum *drum : drums) {
        if (!drum->is_stopped())
            return false;
    }

    return true;
}

void DrumsMgr::request_stop() {
    for (Drum *drum : drums)
        drum->request_stop();
}

Sprite *DrumsMgr::get_sprite(unsigned drum, int row) {
    return icons_sprites[drums[drum]->get_icon(row)];
}

float DrumsMgr::get_icon_offset(unsigned drum) {
    return drums[drum]->get_current_icon_offset();
}

bool DrumsMgr::win() {
    return drums[0]->get_icon(0) == drums[1]->get_icon(0) &&
     drums[0]->get_icon(0) == drums[2]->get_icon(0);
}

} /* game:: */
