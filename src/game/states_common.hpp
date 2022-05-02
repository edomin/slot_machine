#ifndef SRC_GAME_STATES_COMMON_HPP
#define SRC_GAME_STATES_COMMON_HPP

#include <cstddef>
// #include <map>

#include "color.hpp"
#include "point.hpp"
#include "rect.hpp"

namespace {
    const unsigned DRUM1_X     = 32;
    const unsigned DRUM2_X     = 64;
    const unsigned DRUM3_X     = 96;
    const unsigned DRUM_Y      = 32;
}

namespace game::stscmn {
    const int         DRUM_WIDTH  = 32;
    const int         DRUM_HEIGHT = 32;
    const size_t      DRUMS_COUNT              = 3;
    const Rect        DRUMS_RECTS[DRUMS_COUNT] = {
        {DRUM1_X, DRUM_Y, DRUM_WIDTH, DRUM_HEIGHT},
        {DRUM2_X, DRUM_Y, DRUM_WIDTH, DRUM_HEIGHT},
        {DRUM3_X, DRUM_Y, DRUM_WIDTH, DRUM_HEIGHT},
    };
    const Color       DRUMS_RECTS_COLOR        = {0xFFFFFFFF};
    const Color       BTN_UNHOWERED_COLOR      = {0xFFFFFFFF};
    const Color       BTN_HOWERED_COLOR        = {0xFFFF00FF};
    const Color       LABEL_COLOR              = {0x0000FFFF};
    const Point       BTN_START_COORDS         = {140, 32};
    const Point       BTN_STOP_COORDS          = {140, 44};
    const Point       LABEL_RESULT_COORDS      = {140, 56};
    const std::string BTN_START_TEXT           = "Start";
    const std::string BTN_STOP_TEXT            = "Stop";
    const std::string LABEL_WIN_TEXT           = "Win";
    const std::string LABEL_FAIL_TEXT          = "Fail";

    // const std::map<Drum::icon_t, std::string> icons_sprite_names = {
    //     {Drum::icon_t::FIRE, "fire"},
    //     {Drum::icon_t::FIRE, "water"},
    //     {Drum::icon_t::FIRE, "wind"},
    //     {Drum::icon_t::FIRE, "thunder"},
    //     {Drum::icon_t::FIRE, "earth"},
    // };

} /* game::stscmn:: */

#endif /* SRC_GAME_STATES_COMMON_HPP */
