#include "game/game.hpp"

#include <iostream>

namespace game {

Game::Game()
: ctx()
, state_machine(&ctx) {}

void Game::main_loop() {
    float delta = 0.0;

    while (!ctx.window.closed()) {
        ctx.mouse.update();
        state_machine.update(delta);
        state_machine.render();
        ctx.window.update();
        delta = ctx.timer.update();
    }
}

} /* game:: */
