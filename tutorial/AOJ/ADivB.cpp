#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int d = a / b;
    int r = a % b;
    float f = float(a) / float(b);

    cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;
}
