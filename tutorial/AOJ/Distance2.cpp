#include <math.h>
#include <stdio.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double x[n] = {}, y[n] = {};
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];

    double p;
    for (int i = 1; i < 4; i++) {
        p = 0;
        for (int j = 0; j < n; j++) p += pow(fabs(x[j] - y[j]), i);
        printf("%.6f\n", pow(p, 1.0 / i));
    }
    p = 0;
    for (int j = 0; j < n; j++) p += max(0.0, fabs(x[j] - y[j]));
    printf("%.6f\n", p);
    return 0;
}