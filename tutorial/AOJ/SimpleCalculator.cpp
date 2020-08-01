#include <math.h>

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    int i = 0;
    while (true) {
        cin >> a >> op >> b;
        if (op == '+') {
            cout << a + b << endl;
        }
        else if (op == '-') {
            cout << a - b << endl;
        }
        else if (op == '*') {
            cout << a * b << endl;
        }
        else if (op == '/') {
            cout << a / b << endl;
        }
        else if (op == '?') {
            break;
        }

        if (i > 100000) {
            break;
        }
        i++;
    }
}
