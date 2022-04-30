#include "audioplayer.hpp"
#include "draw.hpp"
#include "mouse.hpp"
#include "sound.hpp"
#include "sprite.hpp"
#include "texture.hpp"
#include "timer.hpp"
#include "window.hpp"

#include <string>

namespace {
    const unsigned WINDOW_WIDTH = 200;
    const unsigned WINDOW_HEIGHT = 150;
    const bool WINDOW_FULLSCREEN = false;
    const std::string WINDOW_TITLE = "Slot Machine";
}

int main(int argc, char **arvg) {
    Window window(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_FULLSCREEN, WINDOW_TITLE);
    Timer timer;
    Draw draw(window);
    Audioplayer audioplayer;
    Mouse mouse(window);
    Texture tex_icons("assets/Icons1.png");
    Sprite spr_icons(tex_icons, {0, 96, 32, 32});
    Sound snd_win("assets/win.wav");

    audioplayer.play(snd_win);

    while (!window.closed()) {
        mouse.update();

        draw.clear(Color{0x444444FF});
        draw.put_sprite(spr_icons, {32, 32});
        draw.put_text("Hello", Color{0xFFFF00FF}, {64, 64});

        window.update();
    }

    return 0;
}
