#ifndef SRC_AUDIOPLAYER_HPP
#define SRC_AUDIOPLAYER_HPP

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

#include "sound.hpp"

class Audioplayer {
    private:
        ma_engine miniaudio;

    public:
        Audioplayer();
        ~Audioplayer();

        void play(const Sound &sound);
};

#endif /* SRC_AUDIOPLAYER_HPP */
