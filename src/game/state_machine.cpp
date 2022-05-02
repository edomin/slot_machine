#include "game/state_machine.hpp"

#include "game/state_idle.hpp"
#include "game/state_result.hpp"
#include "game/state_rolling.hpp"

namespace game {

StateMachine::StateMachine(Ctx *ctx)
: states()
, current_state() {
    states.push_back(new StateIdle(*ctx));
    states.push_back(new StateRolling(*ctx));
    states.push_back(new StateResult(*ctx));

    current_state = states.begin();
}

StateMachine::~StateMachine() {

}

void StateMachine::update(float delta) {
    if (!(*current_state)->update(delta)) {
        current_state++;

        if (current_state == states.end())
            current_state = states.begin();
    }
}

void StateMachine::render() {
    (*current_state)->render();
}

} /* game:: */
