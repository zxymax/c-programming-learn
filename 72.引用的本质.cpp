#include <iostream>

using namespace std;

// 引用的本质就是一个指针常量
// 引用一旦初始化后 就不可以发送改变

void func(int &ref) // 发现是引用 转换为 int* const ref = &a
{
  ref = 100; // ref是引用 转换为 *ref = 100
}


int main()
{

  int a = 10;

  // 自动转换为 int *const ref = &a 指针常量是指针指向不可改变 也说明为什么引用不可更改
  int &ref = a;
  ref = 20; // 内部发现ref是引用 自动帮我们转换为：*ref = 20

  cout << "a:" << a << endl;
  cout << "ref:" << ref << endl;

  func(a);

  return 0;
}
