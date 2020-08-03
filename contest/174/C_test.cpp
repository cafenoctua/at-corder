#include <iostream>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define PI 3.14159265359
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int k;
  cin >> k;
  int ans = 1, m = 7;

  if (k % 2 == 0 || k % 5 == 0) {
    cout << -1 << endl;
    return 0;
  }
  if (k == 1 || k == 7) {
    cout << 1 << endl;
    return 0;
  }
  while (m != 0) {
    ans++;
    m = (10 * m + 7) % k;
  }

  cout << ans << endl;
  
  return 0;
}
/*
*/
