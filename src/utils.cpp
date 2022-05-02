#include <string>

#include "tigr.h"

unsigned get_text_width(const std::string &str) {
    return tigrTextWidth(tfont, str.c_str());
}

unsigned get_text_height(const std::string &str) {
    return tigrTextHeight(tfont, str.c_str());
}
