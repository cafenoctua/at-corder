#include <math.h>
#include <iostream>
using namespace std;

int main() {
    long n, d;
    cin >> n >> d;
    int cnt =0;
    for (int i=0; i<n; i++) {
        long x, y;
        cin >> x >> y;
        if (sqrt(x*x + y*y) <= d) cnt++;
    }
    cout << cnt << endl;
}