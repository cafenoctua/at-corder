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
    ll n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];

    ll ans = 0;
    rep(i, n-1) {
        if (a[i+1] - a[i] < 0){
            ans += abs(a[i+1] - a[i]);
            a[i+1] += abs(a[i+1] - a[i]);
        }
    }

    cout << ans << endl;
}