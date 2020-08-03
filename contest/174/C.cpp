#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
    long long k;
    cin >> k;
    if (k % 2 == 0 || k % 5 == 0) {
        cout << -1 << endl;
        return 0;
    }
    else if (k == 1 || k == 7) {
        cout << 1 << endl;
        return 0;
    }
    int cnt = 1;
    int seven = 7;
    // unsigned long long i;
    while (seven != 0) {
        // string s = "7";
        cnt++;
        seven = (seven * 10 + 7) % k ;
    }

    cout << cnt << endl;
    return 0;
}