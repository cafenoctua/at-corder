#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int alp[26] = {0};
    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                alp[s[i] - 'a']++;
            else if (s[i] >= 'A' && s[i] <= 'Z')
                alp[s[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%c : %d\n", i + 'a', alp[i]);
    }
}