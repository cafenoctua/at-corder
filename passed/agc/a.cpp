#include <iostream>
using namespace std;
 
int main() {
	long long n;
	cin>>n;
    double a[2000000];
    for (long long i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for (long long i = 0; i < n-1; i++) {
        for (long long j = i + 1; j < n; j++) {
            int rou = a[i] * a[j];
            if (a[i] * a[j] - rou > 0) cnt++;
        }
    }

    cout << cnt << endl;
}