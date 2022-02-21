// your first C++ Program
#include <iostream>
using namespace std;

// convert inchtocentimetre
double inch_to_cm(double x)
{
    return x * 2.54;
}

// calculate area of rectangle
double area(double width, double height)
{
    return width * height;
}

int main()
{
    // 1. convert inch to cm
    double value = 15.6;
    cout << value << " inch(s) to cm is " << inch_to_cm(value) << endl;

    // area of rectangle
    double width = 4;
    double height = 5;
    cout << "Area of rectangle with 2 sides " << width << " and " << height << " is " << area(width, height) << endl;
    
    return 0;
}
