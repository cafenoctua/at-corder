#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string taro, hana;
    int taro_p = 0, hana_p = 0;
    int min_size;
    for (int i = 0; i < n; i++) {
        cin >> taro >> hana;
        if (taro.compare(hana) == 0) {
            taro_p += 1;
            hana_p += 1;
        }
        else {
            if (taro.compare(hana) > 0) {
                taro_p += 3;
            }
            else {
                hana_p += 3;
            }
        }
    }
    cout << taro_p << ' ' << hana_p << endl;
}