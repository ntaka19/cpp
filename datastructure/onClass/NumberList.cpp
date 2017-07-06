#include <iostream>
#include <cstdio> 
#include <cstring>
using namespace std;

class NumberList{
  private:
    struct ListNode{
      double value; //このノードがもつ値
      struct ListNode *next; //次のノードを指す
    };
    ListNode *head;  //リストの先頭のノードへのポインタ  
    //コンストラクタ:
    //クラスを動的確保（インスタンス生成）した時に、実行される関数のこと。
    //通常の関数と違って戻り値を返せない。また、関数名とクラス名が同じ
    //デスクトラクタ：メモリが解放された時点で実行される。
    //delete関数が実行されたときに行われる。
    //http://stackoverflow.com/questions/4955198/what-does-dereferencing-a-pointer-mean
  public:
    NumberList(){
      head = NULL;
    }~NumberList(){};
   // 連結リストの機能
      void appendNode(double);

   // void insertNode(double);
   // void deleteNode(double);
    void displayList() const;
};

void NumberList::appendNode(double num){
  ListNode *newNode; //new node
  ListNode *nodePtr; //リスト内を移動する用のノード
  //allocate node to the memory
  //to the num
  //set next as NULL
  newNode = new ListNode;
  newNode->value = num;
  newNode->next = NULL;

  if(!head){
    head = newNode;
  }
  else{
    nodePtr = head;

    while(nodePtr->next){
      nodePtr = nodePtr->next;
    }
    nodePtr->next = newNode;
  }
}



int main(){
  /*
  NumberList *take; 
  take = new NumberList;
  //NumberList list;  
  delete take;*/

  NumberList list; 
  list.appendNode(3);
  list.appendNode(9);
  list.appendNode(13);
  list.displayList();
  return 0;
}
