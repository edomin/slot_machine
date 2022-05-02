#ifndef SRC_GAME_ISTATE_HPP
#define SRC_GAME_ISTATE_HPP

namespace game {

class IState {
    public:
        virtual ~IState();

        virtual bool update(float delta) = 0;
        virtual void render() = 0;
};

} /* game:: */

#endif /* SRC_GAME_ISTATE_HPP */
