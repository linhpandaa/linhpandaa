// your first C++ Program
#include <iostream>
using namespace std;

// convert inch to centimetre
double inch2cm(double x)
{
    return x * 2.54;
}

// calculate area of rectangle
double area(double a, double b)
{
    return a * b;
}

int main()
{
    // 1. convert inch to cm
    cout << "5 inch(s) to cm is " << inch2cm(5) << endl;

    // area of rectangle
    cout << "Area of rectangle with 2 sides 4 and 5 is " << area(4, 5) << endl;
    return 0;
}
