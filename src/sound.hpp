#ifndef SRC_SOUND_HPP
#define SRC_SOUND_HPP

#include <string>

class Sound {
    private:
        std::string filename;

    public:
        Sound(const std::string &_filename);

        const std::string *get_filename() const;
};

#endif /* SRC_SOUND_HPP */
