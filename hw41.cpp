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
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        else if (a[i] > max)
            max = a[i];
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}