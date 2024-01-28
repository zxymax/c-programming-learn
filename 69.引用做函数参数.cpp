#include <iostream>

using namespace std;

// 值传递
void mySwap01(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

// 地址传递
void mySwap02(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// 引用传递
void mySwap03(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 10;
  int b = 20;

  mySwap01(a, b);
  cout << "mySwap01 -- a = " << a << endl;
  cout << "mySwap01 -- b = " << b << endl;

  cout << "---------------------\n";

  // mySwap02(&a, &b);
  // cout << "mySwap02 -- a = " << a << endl; // 20
  // cout << "mySwap02 -- b = " << b << endl; // 10

  mySwap03(a, b);
  cout << "mySwap03 -- a = " << a << endl;
  cout << "mySwap03 -- b = " << b << endl;
  return 0;
}
