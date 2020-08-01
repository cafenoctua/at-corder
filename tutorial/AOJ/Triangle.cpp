#include <math.h>
#include <stdio.h>

#include <iostream>
#include <string>
using namespace std;

int main() {
    double a, b, C, PI = 3.1415926535;
    cin >> a >> b >> C;
    double S;
    printf("%.5f\n", a * b * sin(C * PI / 180) / 2);
    printf("%.5f\n", a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(C * PI / 180)));
    printf("%.5f\n", b * sin(C * PI / 180));
    return 0;
}