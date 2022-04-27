#include <iostream>
using namespace std;

struct fraction {
    int a;
    int b;  // check b != 0
    bool valid() {
        return b != 0;
    }
    void optimize() {
        // only valid fraction
        int _a = (a > 0)? (a) : (-a);
        int _b = (b > 0)? (b) : (-b);

        // gcd
        while (_a != 0 && _b != 0) {
            if (_a < _b)
                _b %= _a;
            else 
                _a %= _b; 
        }
        
        int c = _a + _b;    // because one of them is 0
        a /= c;
        b /= c;
    }
    void str() {
        if (a == 0)
            cout << a << endl;
        else {
            if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
                cout << "-";
            }
            cout << ((a > 0)? (a) : (-a)) << "/";
            cout << ((b > 0)? (b) : (-b)) << endl;
        }
    }
};

int main () {
    cout << "Input fraction: ";
    int a, b;
    cin >> a >> b;

    fraction x = {a, b};
    if (x.valid()) {
        x.optimize();
        x.str();
    } else {
        cout << "Error: Invalid fraction." << endl;
    }
    return 0;
}

