#include "sound.hpp"

Sound::Sound(const std::string &_filename)
: filename(_filename) {}

const std::string *Sound::get_filename() const {
    return &filename;
}
