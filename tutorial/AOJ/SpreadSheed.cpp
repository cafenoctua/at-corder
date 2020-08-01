#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int sp[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> sp[i][j];
        }
    }

    int total_row = 0;
    int total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << sp[i][j] << ' ';
            total_row += sp[i][j];
        }
        cout << total_row << endl;
        total += total_row;
        total_row = 0;
    }

    int total_col = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            total_col += sp[j][i];
        }
        cout << total_col << ' ';
        total_col = 0;
    }
    cout << total << endl;
}