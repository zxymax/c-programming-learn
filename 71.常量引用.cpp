#include <iostream>

using namespace std;

// 引用的使用场景 通常用来修饰形参
void showValue(const int &v)
{
  // v = 1000; 赋值 报错
  cout << v << endl;
}

int main()
{
  // int &ref = 10; // 引用本身需要一个合法的内存空间 因此此行错误
  // 加入const 就可以了 编译器优化代码 int temp = 10; const int &ref = temp;
  const int &ref = 10; // 正确

  // ref = 100; // 报错 加入const后不可以修改变量

  // 函数中利用常量引用防止误操作修改实参
  int a = 10;
  showValue(a);
  return 0;
}
