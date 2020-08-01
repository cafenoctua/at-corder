#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    static int card[4][13];
    char rank;
    int rank_n;
    int num;

    char shcd[4] = {'S', 'H', 'C', 'D'};

    for (int i = 0; i < n; i++) {
        cin >> rank >> num;
        for (int j = 0; j < 4; j++) {
            if (shcd[j] == rank) {
                rank_n = j;
                break;
            }
        }
        card[rank_n][num] = 1;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 13; j++) {
            if (card[i][j] == 0) {
                cout << shcd[i] << ' ' << j << endl;
            }
        }
    }
}
