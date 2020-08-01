#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    string cmd;
    float a, b;
    string c;
    char tmp;
    for (int i = 0; i < n; i++) {
        cin >> cmd >> a >> b;
        if (cmd == "print") {
            cout << str.substr(a, b - a + 1) << endl;
        }
        else if (cmd == "reverse") {
            string tmp = str.substr(a, b - a + 1);
            reverse(tmp.begin(), tmp.end());
            str = str.substr(0, a) + tmp + str.substr(b + 1, str.size() - a - 1);
        }
        else if (cmd == "replace") {
            cin >> c;
            str = str.substr(0, a) + c + str.substr(b + 1, str.size() - a - 1);
        }
    }
}