#include <iostream>
using namespace std;

int main() {
    int a, b, c, cnt;
    cin >> a >> b >> c;
    if ((1 < a < 10000) && (1 < b < 10000) && (1 < c < 10000)) {
        cnt = 0;
        for (int i = a; i <= b; i++) {
            if (c % i == 0) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
