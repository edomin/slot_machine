#include "audioplayer.hpp"

#define MINIAUDIO_IMPLEMENTATION
#ifdef __GNUC__
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wcast-qual"
    #pragma GCC diagnostic ignored "-Wduplicated-branches"
    #pragma GCC diagnostic ignored "-Wformat"
    #pragma GCC diagnostic ignored "-Wold-style-cast"
    #pragma GCC diagnostic ignored "-Wreturn-type"
    #pragma GCC diagnostic ignored "-Wswitch-default"
    #pragma GCC diagnostic ignored "-Wswitch-enum"
    #pragma GCC diagnostic ignored "-Wuseless-cast"
    #pragma GCC diagnostic ignored "-Wzero-as-null-pointer-constant"
#endif /* __GNUC__ */
#include "miniaudio.h"
#ifdef __GNUC__
    #pragma GCC diagnostic pop
#endif /* __GNUC__ */

Audioplayer::Audioplayer()
: miniaudio() {
    ma_engine_init(nullptr, &miniaudio);
}

Audioplayer::~Audioplayer() {
    ma_engine_uninit(&miniaudio);
}

void Audioplayer::play(const Sound &sound) {
    ma_engine_play_sound(&miniaudio, sound.get_filename()->c_str(), nullptr);
}
