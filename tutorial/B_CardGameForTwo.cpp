#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int card[n];
    for (int i = 0; i < n; i++) cin >> card[i];
    // sort
    sort(card, card + n, greater<int>());

    int alice = 0, bob = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) alice += card[i];
        else bob += card[i];
    }

    cout << alice - bob << endl;
    
} // namespace std;

