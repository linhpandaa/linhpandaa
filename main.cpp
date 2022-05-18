#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// g++ main.cpp -std=c++20

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
        map<string, int> ds;
        for (string tu: dstu) {
            if (ds.size() == 0) {
                ds.insert({tu, 1});
            }
            else {               
                if (ds.contains(tu)) {
                    ds[tu]++;
                } else {
                    ds.insert({tu, 1});
                }
            }
        }
        ofstream out("linh.txt");
        for (const auto& [tu, soluong]: ds) {
            if (soluong > 1) {
                out << tu << " [" <<  soluong << "]" << endl;
            }
        }
    }

    return 0;
}
