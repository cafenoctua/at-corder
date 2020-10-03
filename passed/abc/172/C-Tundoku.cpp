#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int a[n];
    rep(i, n) cin >> a[i];
    int b[m];
    rep(i, m) cin >> b[i];

    ll t = 0;
    rep(i, m) t += b[i];
    int j = m;
    int ans = 0;
    rep(i, n+1) {
        while(j > 0 && t > k) {
            --j;
            t -= b[j];
        }
        if (t > k) break;
        ans = max(ans, i+j);
        if (i == n) break;
        t += a[i];
    }

    cout << ans << endl;
    return 0;
}