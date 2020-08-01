#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int in;
    int min = 1000001;
    int max = -1000001;
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in > max) {
            max = in;
        }
        if (in < min) {
            min = in;
        }

        sum += in;
    }

    cout << min << ' ' << max << ' ' << sum << endl;
}
