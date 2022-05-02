#include "game/drum.hpp"

#include <cfloat>
#include <cstdlib>

#include "types.hpp"

namespace {
    const float STARTING_SPEED_MIN = 750.0f;
    const float STARTING_SPEED_MAX = 1000.0f;
    const float SPEED_MIN          =   25.0f;
    const float DECELERATION       = 500.0f;
    const float ICON_HEIGHT        =  32.0f;
}

namespace game {

Drum::Drum()
: speed(0.0f)
, must_stop(true)
, current_icon_offset(0.0f)
, current_icon_index(0) {}

void Drum::roll() {
    /* https://stackoverflow.com/questions/686353/random-float-number-generation */
    speed = STARTING_SPEED_MIN + static_cast<float>(rand()) /
     (RAND_MAX / (STARTING_SPEED_MAX - STARTING_SPEED_MIN));
    must_stop = false;
}

void Drum::update(float delta) {
    current_icon_offset += speed * delta;
    if (current_icon_offset > ICON_HEIGHT) {
        current_icon_offset -= ICON_HEIGHT;
        current_icon_index--;

        if (current_icon_index < 0)
            current_icon_index = ICONS_COUNT - 1;

        if (must_stop)
            speed = 0.0f;
    }

    if (!is_stopped()) {
        speed -= DECELERATION * delta;

        if (speed < SPEED_MIN) {
            speed = SPEED_MIN;
            must_stop = true;
        }
    }
}

float Drum::is_stopped() {
    return speed <= FLT_EPSILON;
}

void Drum::request_stop() {
    must_stop = true;
}

Drum::icon_t Drum::get_icon(int row) {
    ssize_t index = current_icon_index + row;

    if (index < 0)
        index += ICONS_COUNT;
    else if (index >= static_cast<ssize_t>(ICONS_COUNT))
        index -= ICONS_COUNT;

    return ICONS[index];
}

float Drum::get_current_icon_offset() {
    return current_icon_offset;
}

} /* game:: */
