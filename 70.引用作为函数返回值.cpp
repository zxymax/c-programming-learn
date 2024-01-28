#include <iostream>

using namespace std;

// int& test01()
// {
//   int a = 10;
//   return a;
// }

// 返回静态变量引用
int &test02()
{
  static int a = 10;
  return a;
}
int main()
{
  // 不能返回局部变量的引用
  // int &ref = test01();
  // cout << "ref = " << ref << endl; 第一次结果正确 是因为编译器做了保留
  // cout << "ref = " << ref << endl; 第二次结果错误 是因为a的内存已经释放

  // 如果函数做左值 那么必须返回引用
  int &ref = test02();
  cout << "ref = " << ref << endl;
  cout << "ref = " << ref << endl;

  test02() = 1000; // 如果函数的返回值是引用 这个函数调用可以作为左值
  cout << "ref = " << ref << endl;
  cout << "ref = " << ref << endl;
  return 0;
}
