#ifndef SRC_GAME_DRUM_HPP
#define SRC_GAME_DRUM_HPP

#include <cstddef>
#include <vector>

#include "types.hpp"

namespace game {

class Drum {
    public:
        enum class icon_t {
            FIRE,
            WATER,
            WIND,
            THUNDER,
            EARTH,
        };

    private:
        static const size_t ICONS_COUNT = 15;
        const std::vector<icon_t> ICONS = {
            icon_t::EARTH,
            icon_t::WATER,
            icon_t::FIRE,
            icon_t::WIND,
            icon_t::WATER,
            icon_t::FIRE,
            icon_t::WIND,
            icon_t::THUNDER,
            icon_t::FIRE,
            icon_t::WATER,
            icon_t::WIND,
            icon_t::FIRE,
            icon_t::WATER,
            icon_t::THUNDER,
            icon_t::FIRE,
        };

        float   speed;
        bool    must_stop;
        float   current_icon_offset;
        ssize_t current_icon_index;

    public:
        Drum();

        void   roll();
        void   update(float delta);
        float  is_stopped();
        void   request_stop();
        icon_t get_icon(int row);
        float  get_current_icon_offset();
};

} /* game:: */

#endif /* SRC_GAME_DRUM_HPP */
