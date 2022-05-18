#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream in("text.txt");
    if (in.is_open()) {
        char c = 0;
        vector<string> dstu;
        while (in.get(c)) {
            string tu;
            while (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
                if ('A' <= c && c <= 'Z')
                    c = c - 'A' + 'a';
                tu.push_back(c); 
                in.get(c);
            }
            if (tu.size() > 0) {
                dstu.push_back(tu);
            }
        }
        vector<string> lst;
        vector<int> x;
        for (string tu: dstu) {
            if (lst.size() == 0) {
                lst.push_back(tu);
                x.push_back(1);
            }
            else {
                auto i = find (lst.begin(), lst.end(), tu);
                if (i == lst.end() ) {                 //new word
                    lst.push_back(tu);
                    x.push_back(1);
                } 
                else {
                    x[i-lst.begin()] ++;
                }                
            
            }
        }
        ofstream out("linh.txt");
        for (int i = 0; i < lst.size(); i++) {
            if (x[i] > 1) {  
                out << lst[i] << " [" <<  x[i] << "]" << endl;
            }
        }
        out.close();
    }
    in.close();

    return 0;
}
