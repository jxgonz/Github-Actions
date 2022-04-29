
#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    //Girum's test
    Rectangle rect1 = Rectangle(5, 6);
    Rectangle rect2 = Rectangle(10, 9);
    cout << "Rectangle 1 perimeter: " << rect1.perimeter() << endl;
    cout << "Rectangle 2 perimeter: " << rect2.perimeter() << endl;

    //Johan's Test
    Rectangle rect = Rectangle(2, 3);
    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Height: " << rect.getHeight() << endl;
    return 0;
}


