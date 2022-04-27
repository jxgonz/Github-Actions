#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect = Rectangle(2, 3);
    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Height: " << rect.getHeight() << endl;
    return 0;
}

