#include <math.h>

#include <iostream>
using namespace std;

int main() {
    float r;
    cin >> r;

    float d = r * r * M_PI;
    float t = 2 * r * M_PI;

    cout << d << " " << t << endl;
}
