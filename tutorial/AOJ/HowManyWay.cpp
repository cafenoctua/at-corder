#include <iostream>
using namespace std;

int main() {
    int n, x;
    int dic_cnt = 0;
    int cnt = 0;
    while (true) {
        cin >> n >> x;
        if (n + x == 0) {
            break;
        }
        for (int i = n; i > 0; i--) {
            for (int j = i - 1; j > 0; j--) {
                for (int k = j - 1; k > 0; k--) {
                    if (i + j + k == x) {
                        dic_cnt++;
                    }
                }
            }
        }
        cout << dic_cnt << endl;
        dic_cnt = 0;
        cnt++;
        if (cnt > 100000) {
            break;
        }
    }
}
