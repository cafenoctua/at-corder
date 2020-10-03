#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)

int main() {
    ll a;
    float b;
    cin >> a >> b;
    cout << ((int)(b*100) * a)/100 << endl;
}