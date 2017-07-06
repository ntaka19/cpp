//インライン関数については今すぐ必要となるものに使う。
//

#include <iostream>
#include <string>
using namespace std;

class Neko
{
	private:
		string name;
	public: 
		Neko(string s); //コンストラクタがあるよ。string s のsは省略可能。
		void naku() const; //naku()という関数があるよ。定義をとって;をつけただけ
		
};

Neko::Neko(string s): name(s){} //Nekoという名クラスのNekoという関数(クラスタ)

void Neko::naku() const{
	cout<<"にゃあ。俺様は" << name << "だ" <<endl;
} 
//オブジェクトのデータを変えないメンバ関数には、後にconstというキーワードをつけるのがよいとされている。


int main(){
	Neko dora("ボス"); //ボスという名前の持ったdoraが生成される。
	//コンストラクタが実行され、doraがオブジェクトを表すようになる。
	
	cout<<"あなたが名付けたネコがメモリ上に生成されました"<<endl;
	cout<<"ネコが鳴きます"<<endl;

	dora.naku();
}

