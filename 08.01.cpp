#include <iostream>
using namespace std;

// Build: g++ -std=c++11 08.1.cpp -o linh
// Run: ./linh

int main() {
    try {
        cout << "Input two numbers: ";
        double a, b;
        cin >> a >> b;
        cout << "Result: " << a << "/" << b << " = " << a / b << endl;
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
