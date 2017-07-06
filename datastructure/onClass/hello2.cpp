//cin を使った入力
//文字列の入れ物として、string あるいは配列
//stringが一般的、細かい走査の場合配列
#include<iostream> //必要なものをとってくるという意味。
#include <string>
using namespace std; //coutの正式な名称はstd::cout

int main(){
	string name;//name という入れ物の定義.変数のこと。
	cout << "hello. I am a comupter" <<endl;
	cout << "fill your name" <<endl;
	cin >> name; //ユーザーの入力を待ち、入力があれば、それをnameに格納する。
	cout << name<< "さん。よろしく。" <<endl;　
		//>>は流しこめ、押し込めという意味。

}

/*
 *using namespace std を使わなかった場合、
 *std::cout << "hello" << std::endlみたいなる。
 *
 * */
