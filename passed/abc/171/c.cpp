#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using ll = long long;

string f(ll n) {
    if (n == 0) return "";
    n--;
    return f(n/26) + string(1, 'a'+n%26);
}
int main() {
    ll n;
    cin >> n;

    cout << f(n) << endl;
}