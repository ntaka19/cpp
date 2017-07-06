#include <cstdio>

class Test{
  public:
    int figure;
    Test(int temp){
      figure =temp;
    }
    ~Test(){printf("デスクトラクタ実行\n");
    }
};

int main(void){
  Test *test;

  test = new Test(50);
  printf("%d\n",test->figure);

  delete test; //free memory
  return 0;
}

