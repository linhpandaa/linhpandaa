#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string t;
    getline(cin, t);

    istringstream iss(t);
    string word;
    string ta;
    while (iss >> word) 
    {
        ta += word + " ";
        if (word[0] == 'A')
            ta += word + " ";
    }
    cout << ta << endl;
    return 0;
}