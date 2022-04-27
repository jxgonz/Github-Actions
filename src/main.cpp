#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect1;
    rect1.set_width(5);
    rect1.set_height(6);

    Rectangle rect2;
    rect2.set_width(10);
    rect2.set_height(9);

    cout << "Rectangle 1 perimeter: " << rect1.perimeter() << endl;
    cout << "Rectangle 2 perimeter: " << rect2.perimeter() << endl;

    return 0;
}
