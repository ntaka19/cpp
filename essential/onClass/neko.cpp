#include <iostream>
#include <string>
using namespace std;

class Neko
{
	private:
		string name;
	public: 
		//クラスと同じ名前の関数のことをコンストラクタと呼ぶ。
		//いわば、ネコをつくるための関数。関数はいわば動作。
		Neko(string s){
		name = s;
		}
		//こっちは動作メソッド。
		void naku(){
			cout<<"にゃあ。俺様は"<<name << "だ"<<endl;
		}
};

int main(){
	Neko dora("ボス"); //ボスという名前の持ったdoraが生成される。
	//コンストラクタが実行され、doraがオブジェクトを表すようになる。
	
	cout<<"あなたが名付けたネコがメモリ上に生成されました"<<endl;
	cout<<"ネコが鳴きます"<<endl;

	dora.naku();
}
