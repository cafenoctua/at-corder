#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define invrep(i,n) for(int i = (int)(n); i > 0; i++)
using ll = long long;

ll m = 100;

int main() {
    ll x;
    cin >> x;

    ll ans = 0;
    while(m< x) {
        m += (m / 100);
        ans++;
    }

    cout << ans << endl;
}