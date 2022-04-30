#ifndef SRC_RECT_HPP
#define SRC_RECT_HPP

class Rect {
    public:
        unsigned x;
        unsigned y;
        int      width;
        int      height;

        Rect(unsigned _x, unsigned _y, int _width, int _height);
        // Rect(const Rect &other);
};

#endif /* SRC_RECT_HPP */
