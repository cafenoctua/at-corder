// 基本のinclude
#include <iostream>
using namespace std;

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
vector<int> vec;          //配列の宣言
vec = { 10, 20, 30 };    //配列への代入
vec.size()                //配列の要素数 上の場合3が帰ってくる
vec.at(i)                 //配列のi番目にアクセス
vector<vector<int>> vec(10, vector<int>(10));   //二次元配列の宣言

// 文字列取り扱い
#include <string>

string s = "ABC"; // string型は""で定義される
char c = 'ABC'; // char型は''で定義される

int i = "1" - "0"; // これで数値型に変換できる
string s = to_string(i); //数値型からstring型に変換する

