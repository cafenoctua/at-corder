#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int sum = 0;
    while (true) {
        cin >> s;
        if (s == "0") break;
        sum = 0;
        for (int i = 0; i < s.size(); i++) {
            sum += s[i] - '0';
        }
        cout << sum << endl;
    }
}