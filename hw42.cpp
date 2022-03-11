#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "input size: ";
    cin >> n;
    cin >> m;
    
    if (n < 1 || m < 1)
    {
        cout << "Error: Each matrix size can not be smaller than one!\n";
        return -1;
    }

    int a[n][m];
    cout << "input matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] > 0)
                sum += a[i][j];
                
    cout << "Sum of positive numbers is " << sum << endl;
    return 0;
}