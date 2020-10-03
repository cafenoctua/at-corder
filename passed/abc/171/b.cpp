#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> p(k);
    rep(i, k) cin >> p[i];

    sort(p.begin(), p.end());

    int total = 0;
    rep(i, n) total += p[i];

    cout << total << endl;

    return 0;
}