#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int m;
    int b;
    string s_tmp;
    cin >> s;
    while (s != "-") {
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> b;
            s = s.substr(b, s.size() - b) + s.substr(0, b);
        }
        cout << s << endl;
        cin >> s;
    }
}