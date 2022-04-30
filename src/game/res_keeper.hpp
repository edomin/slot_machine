#ifndef SRC_GAME_RES_KEEPER_HPP
#define SRC_GAME_RES_KEEPER_HPP

#include <map>
#include <string>

#include "sound.hpp"
#include "sprite.hpp"
#include "texture.hpp"

namespace game {

class ResKeeper {
    private:
        Texture tex_icons;
        std::map<std::string, Sprite *>  sprites;
        std::map<std::string, Sound *>   sounds;

    public:
        ResKeeper();
        ~ResKeeper();

        Sprite *get_sprite(const std::string &name);
        Sound  *get_sound(const std::string &name);
};

} /* game:: */

#endif /* SRC_GAME_RES_KEEPER_HPP */
