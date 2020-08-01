#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string text;
    cin >> text;
    int cnt = 0;
    while (text != "END_OF_TEXT") {
        for (int i = 0; i < text.size(); i++) {
            if (text[i] >= 'A' && text[i] <= 'Z') {
                text[i] += 'a' - 'A';
            }
        }
        if (text == s) {
            cnt++;
        }
        cin >> text;
    }

    cout << cnt << endl;
}