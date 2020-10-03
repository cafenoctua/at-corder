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

string JUDGE = "ACGT";

int main() {
    string S;
    cin >> S;

    int cnt = 0;
    int cnt_max = 0;
    // bool f = false;
    rep(i, S.size()) {
        rep(j, JUDGE.size()){ 
            if(S[i]==JUDGE[j]) {
                cnt++;
                if (cnt > cnt_max) cnt_max = cnt;
                break;
            }
            else if(j == JUDGE.size()-1) cnt = 0;
        }
    }
        // if (JUDGE.find(S[i]) != string::npos) cnt++;
        // else {
        //     if (cnt > cnt_max) cnt_max = cnt;  
        //     cnt = 0;
        // }
        // f = false;
    // }

    cout << cnt_max << endl;
}