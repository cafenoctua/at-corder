#include <iostream>
#include <string>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    string s;
    int cnt[4] = {0,0,0,0};
    rep(i, n) {
        cin >> s;
        if (s == "AC") cnt[0]++;
        else if (s == "WA") cnt[1]++;
        else if (s == "TLE") cnt[2]++;
        else if (s == "RE") cnt[3]++;
    }

    string jud[4] = {"AC", "WA", "TLE", "RE"};
    rep(i, 4) cout << jud[i] << " x " << cnt[i] << endl;
}