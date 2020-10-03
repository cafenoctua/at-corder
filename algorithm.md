# bit全探索
コード例
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 3;

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}
```

```cpp
// {0, 1, ..., n-1} の部分集合の全探索
for (int bit = 0; bit < (1<<n); ++bit) {
  //
}
```

```(1<<n)```の部分だと思う。```(1<<n)```は2^nと覚えよう。2^nは全パターン数と一致する。

```<<```という演算子はビット演算子で、ビット（2進数）を左へシフトする。int型は透過的に整数として扱えるが、実際に内部ではbitで管理されている。例えば3を8bitで保持するのであれば、0b00000011になる（2進数は先頭に0bをつける）。

そして1 (0b00000001)を左へ3ビットシフトする場合は```1<<3```と書き、結果は8(0b00001000)となる。

and演算子
```cpp
if (bit & (1<<i)) { // 列挙に i が含まれるか
```
```&```の部分はAND演算、つまり「両方のビットが 1 のときのみ結果が 1 になるビット演算」である。

## Ref
[bit全探索について簡単にまとめる](https://qiita.com/hareku/items/3d08511eab56a481c7db)
[ビット演算 (bit 演算) の使い方を総特集！ 〜 マスクビットから bit DP まで 〜](https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361)

# 深さ全探索
## Ref
-[全探索](https://www.slideshare.net/hcpc_hokudai/ss-73161927)