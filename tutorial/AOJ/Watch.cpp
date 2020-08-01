#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int h, m, s;
    h = t / pow(60, 2);
    m = (t - h * pow(60, 2)) / 60;
    s = t - h * pow(60, 2) - m * 60;
    cout << h << ":"
         << m << ":" << s << endl;
}