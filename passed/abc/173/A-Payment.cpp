#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    a = n % 1000;
    if (a > 0) a = 1000 - a;
    cout << a << endl;
}