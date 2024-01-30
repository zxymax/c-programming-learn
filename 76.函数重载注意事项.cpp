#include <iostream>

using namespace std;


// 函数重载注意事项
// 1. 引用作为重载条件
void func(int &a) // int &a = 10 不合法
{
  cout << "func (int &a)调用" << endl;
}
void func(const int &a) // const int &a = 10
{
  cout << "func (const int &a)调用" << endl;
}

// 2. 函数重载碰到默认参数
void func2(int a, int b=10)
{
  cout << "func2 (int a, int b)调用" << endl;
}
void func2(int a)
{
  cout << "func2 (int a)调用" << endl;
}

int main()
{
  int a = 10;
  func(a);

  func(10); 

  cout << "--------------------------" << endl;
  // func2(10); // 报错 当函数重载碰到默认参数 出现二义性 报错 尽量避免这种情况 写函数重载的时候不要写默认参数
  return 0;
}
