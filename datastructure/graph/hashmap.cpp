#include<iostream>
#include<unordered_map>
#include<cstint> 

using namespace std;

struct HashTableKey {
  int x;
  int y;
  struct Hash;

  HashTableKey(int x, int y);
  //演算子のオーバーロード
  
  bool operator==(const HashTableKey& rhs) const;
  bool operator!=(const HashTableKey& rhs) const;

  private: 
    friend ostream& operator <<(std::ostream& s, const HashTableKey& obj);
};

//コンストラクタ
inline HashTableKey::HashTableKey(int x, int y){
  this -> x = x;
  this -> y = y;
  return;
}

//比較演算子
inline bool HashTableKey::operator==(const HashTableKey& rhs) const{
  const HashTableKey& lhs = *this;
  return lhs.x == rhs.x && lhs.y == rhs.y; //true or false 
}
  
}

