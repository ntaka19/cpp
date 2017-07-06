#include <iostream>
using namespace std; 

class Rocket
{
	int nenryo;
	int sokudo;
	public: 
		Rocket(int);
		void kasoku();
};

Rocket::Rocket(int x): nenryo(x), sokudo(0){}
//nenryoとsokudoの値を初期化している。

//void なにもしないで終わる趣旨
void Rocket::kasoku(){
	if(nenryo >= 2 ){
	sokudo += 2;
	nenryo -= 2;
	cout << "現在の燃料は"<< nenryo << "です。" << endl;
	cout << "現在の速度は"<< sokudo << "です。" << endl;
	}
else { 
	cout << "燃料切れです。加速できません。漂流です。" << endl;
 }
}
int main()
{
	cout << "ロケットをメモリ情に作ります。燃料を入力してください。"<< endl;
	int n;
	cin >> n;

	Rocket ohtori(n); //コンストラクタの中身が実行される。
	cout << "加速します。" << endl;
	ohtori.kasoku(); 
	cout << "ohotoriの冒険は終わり" << endl;
}
