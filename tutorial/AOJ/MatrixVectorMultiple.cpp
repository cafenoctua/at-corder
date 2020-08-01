#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int v1[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v1[i][j];
        }
    }
    int v2[m];
    int i = 0;
    while (i < m) {
        cin >> v2[i];
        i++;
    }

    int pro;
    for (int i = 0; i < n; i++) {
        pro = 0;
        for (int j = 0; j < m; j++) {
            pro += v1[i][j] * v2[j];
        }
        cout << pro << endl;
    }
}
