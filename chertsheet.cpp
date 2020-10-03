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

//標準入力　スペースか改行で区切ってくれる
int a, b, c;
cin >> a >> b >> c;

//標準出力
cout << "a" << "b";               //こういう書き方もできる
cout << "a" << 100 << "b";        //こういう書き方もできる

//for文
for (int i = 0; i < N; i++) {
}

//配列
s[1][1]                   // ベクトルを使わない2次配列
vector<int> vec;          //配列の宣言
vec = { 10, 20, 30 };    //配列への代入
vec.size()                //配列の要素数 上の場合3が帰ってくる
vec.at(i)                 //配列のi番目にアクセス
vector<vector<int>> vec(10, vector<int>(10));   //二次元配列の宣言
vec.resize(n)   // 配列サイズ再定義できる
vec.push_back(i) // iをベクトル配列の末尾に追加する
sort(v.begin(), v.end()); // ベクトル配列のソート
// 文字列取り扱い
#include <string>

string s = "ABC"; // string型は""で定義される
char c = 'ABC'; // char型は''で定義される

int i = "1" - "0"; // これで数値型に変換できる
string s = to_string(i); //数値型からstring型に変換する
"00" + to_string(1) // 数字文字列同時の結合 -> "001"
'a' + 5; // a→fにずらすことができる
s.substr(i,3) // 文字列の開始位置と終了位置を指定できる
JUDGE.find("A") != string::npos // 文字列検索 nposは見つからなかったときの返り値
// 配列に最大値と最小値
*max_element(a.begin(), a.end())
*min_element(a.begin(), a.end())


// struct
struct fruit {
  string name;  // 名前
  int    price; // 価格
};

vector<fruit> fruits;

// nameをキーに昇順でソート
sort(fruits.begin(), fruits.end(), 
     [](const fruit& x, const fruit& y) { return x.name < y.name;});

// priceをキーに降順でソート
sort(fruits.begin(), fruits.end(), 
     [](const fruit& x, const fruit& y) { return x.price > y.price;});
// 数値計算精度
* 0.01より/100のほうが精度が担保される // %増加について

// 数値変換

int digit10(int num){
    if (num==0) return 0;
    return 1 + digit10(num/10);
}

