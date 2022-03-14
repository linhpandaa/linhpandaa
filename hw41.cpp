#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;

    if (n < 1)
    {
        cout << "Error: Number of elements can not be smaller than one!\n";
        return -1;
    }

    int a[n];
    cout << "Input array:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int imin = 0, imax = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[imax])
            imax = i;
        else if (a[i] < a[imin])
            imin = i;
    }

    int c = a[imin];
    a[imin] = a[imax];
    a[imax] = c; 

    cout << "Array after rearrangement:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}