#ifndef SRC_GAME_DRUMS_MGR_HPP
#define SRC_GAME_DRUMS_MGR_HPP

#include <map>
#include <vector>

#include "game/drum.hpp"
#include "game/res_keeper.hpp"
#include "sprite.hpp"

namespace game {

class DrumsMgr {
    private:
        const size_t DRUMS_COUNT = 3;

        std::vector<Drum *>            drums;
        std::map<Drum::icon_t, Sprite *> icons_sprites;

    public:
        DrumsMgr(ResKeeper &res_keeper);
        ~DrumsMgr();

        void    roll();
        void    update(float delta);
        bool    is_stopped();
        void    request_stop();
        Sprite *get_sprite(unsigned drum, int row);
        float   get_icon_offset(unsigned drum);
        bool    win();
};

} /* game:: */

#endif /* SRC_GAME_DRUMS_MGR_HPP */
