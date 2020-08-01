#include <math.h>
#include <stdio.h>

#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        double p[1000] = {};
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        double ave;
        ave = accumulate(begin(p), end(p), 0.0) / n;

        double x_d[1000] = {};
        for (int i = 0; i < n; i++) {
            x_d[i] += pow(p[i] - ave, 2);
        }
        double s;
        s = sqrt(accumulate(begin(x_d), end(x_d), 0.0) / n);

        cout << s << endl;
    }
}