#include <iostream>
using namespace std;

void bubble_sort(int n, int* a) {
    for (int j = n-1; j > 0; j--) { //for theo do dai cua day so
        for (int i = 0; i < j; i++) { //di so sanh va doi cho trong 1 doan cua day so co do dai la j
            if (a[i] > a[i+1]) {
                // swap
                int x = a[i];
                a[i] = a[i+1];
                a[i+1] = x;
            }
        }
    }
}

void disp(const int n, const int* a) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    // doc massive
    // 1. doc so luong so 
    // 2. doc cac so
    cout << "Input number of elements: ";
    int n; cin >> n;
    if (n <= 0) {
        cout << "Error: invalid number of elements" << endl;
        return -1;
    }
    cout << "Input array: ";
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // sap xep day so
    // void bubble_sort(int n, int* a) {}
    bubble_sort(n, a);
    // in ra array da duoc sap xep
    // void disp(const int n, const int* a) {}
    disp(n, a);
    delete[] a;
    return 0;
}
