// 基本のinclude
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define invrep(i,n) for(int i = (int)(n); i > 0; i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    int ch, cw;
    cin >> ch >> cw;
    int dh, dw;
    cin >> dh >> dw;
    char s[h][w];
    rep(i, h) {
        rep(j, w) cin >> s[i][j];
    }
    cw -=1;
    dw -=1;
    ch -=1;
    dh -=1;

    int ans = 0;
    int bch, bcw;
    while(cw != dw || ch != dh) {
        bch = ch;
        bcw = cw;
        if (dw - cw > 0 && s[ch][cw+1] == '.') cw += 1;
        else if (dw - cw < 0 && s[ch][cw-1] == '.') cw -= 1;
        if (dh - ch > 0 && s[ch+1][cw] == '.') ch += 1;
        else if (dh - ch < 0 && s[ch-1][cw] == '.') ch -= 1;

        bool stop = true;
        int tch=0, tcw=0;
        if (ch == bch && cw == bcw) {
            rep(i, 5) {
                rep(j, 5){
                    if (s[ch-2+i][cw-2+j]=='.'){
                        if(abs(dh - tch) < abs(dh - ch-2+i)){
                            tch = ch-2+i;
                        } 
                        if (abs(dw - tcw) < abs(dw - cw-2+j)) {
                            tcw = cw-2+j;
                        }
                    }
                }
            }
            if (tch != 0) {
                ch = tch;
                stop = false;
            }
            if (tcw != 0) {
                cw = tcw;
                stop = false;
            }
        }
        else continue;
        
        if (stop) {
            cout << -1 << endl;
            return 0;
        }
        else ans++;
    }

    cout << ans << endl;
}