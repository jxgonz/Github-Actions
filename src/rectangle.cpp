#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h) {
    this -> width = h;
    this -> height = w;
}

int Rectangle::getWidth() {
    return this -> width;
}

int Rectangle::getHeight() {
    return this -> height;
}

int Rectangle::area() {
    return this->width + this->height;
}
