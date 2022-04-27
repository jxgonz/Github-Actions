#include "../header/rectangle.hpp"
#include <iostream>

Rectangle::Rectangle() {
    int width = 0;
    int height = 0;
}

Rectangle::Rectangle(int w, int h) {
    this->width = w;
    this->height = h;
}
void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return (this-> width + this -> height);
}
