#include "timer.hpp"

#include "tigr.h"

Timer::Timer() {
    tigrTime();
}

float Timer::update() {
    return tigrTime();
}
