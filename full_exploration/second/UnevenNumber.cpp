// 基本のinclude
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define rep(i,n) for(long long i = 0; i < (long long)(n); i++)
#define invrep(i,n) for(int i = (int)(n); i > 0; i++)
using ll = long long;

int digit10(int num){
    if (num==0) return 0;
    return 1 + digit10(num/10);
}

int main() {
    ll n;
    cin >> n;

    // ll l10 = log10(n);
    ll res = 0;
    rep(i, n) if(digit10(i+1) % 2 == 1) res++;
    // if(n>10 && l10 % 2 == 0) res += n - pow(10, l10) +1;

    cout << res << endl;

}