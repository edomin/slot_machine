#ifndef SRC_GAME_ISTATE_HPP
#define SRC_GAME_ISTATE_HPP

namespace game {

class IState {
    public:
        virtual ~IState();

        virtual void update() = 0;
        virtual void draw() = 0;
};

} /* game:: */

#endif /* SRC_GAME_ISTATE_HPP */
