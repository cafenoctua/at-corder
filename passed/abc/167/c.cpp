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

int a[12][12];
const int INF = 100010001001;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<int> c(n);
    // vector<vector<int>> a(n, vector<int>(m));
    rep (i, n) {
        cin >> c[i];
        rep (j, m) cin >> a[i][j];
    }

    int ans = INF;
    rep(s, 1<<n) {
        int cost = 0;
        vector<int> d(n);
        rep(i, n) {
            if (s>>i&1) {
                cost += c[i];
                rep(j, m) d[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(j, m) if (d[j] < x) ok = false;
        if (ok) ans = min(ans, cost);
    }
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}