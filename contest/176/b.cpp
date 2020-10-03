// 基本のinclude
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define invrep(i,n) for(int i = (int)(n); i > 0; i++)
using ll = long long;

int main() {
    string n;
    cin >> n;
    ll ans = 0;
    rep(i, n.size()) ans += n[i] - '0';
    if (ans % 9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}