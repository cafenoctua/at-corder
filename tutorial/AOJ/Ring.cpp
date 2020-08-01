#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;
    bool ring;
    int a;
    for (int i = 0; i < s.size() + p.size(); i++) {
        ring = false;
        for (int j = i; j < i + p.size(); j++) {
            if (j >= s.size()) {
                a = j - s.size();
            }
            else {
                a = j;
            }
            if (s[a] == p[j - i]) {
                ring = true;
            }
            else {
                ring = false;
                break;
            }
        }
        if (ring == true) {
            cout << "Yes" << endl;
            break;
        }
    }
    if (ring == false) {
        cout << "No" << endl;
    }
}