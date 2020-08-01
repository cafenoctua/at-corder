#include <iostream>
using namespace std;

int main() {
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    int top = y + r;
    int bottom = y - r;
    int right = x + r;
    int left = x - r;
    if ((top <= h) && (right <= w) && (bottom >= 0) && (left >= 0)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
