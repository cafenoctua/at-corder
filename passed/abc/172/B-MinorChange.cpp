#include <iostream>
#include <string>
using namespace std;
#define rep(i,n) for (int i = 0;i < (int)(n);i++)

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    int cnt = 0;
    rep(i, s.size()) {
        if (s[i] != t[i]) cnt++;
    }
    
    cout << cnt << endl;
}