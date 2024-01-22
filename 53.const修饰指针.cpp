#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;

  // const 修饰指针 - 常量指针
  const int *p = &a;
  // 指针的指向的值不可以修改，指针的指向可以修改
  // *p = 20; // 错误
  p = &b; // 正确

  // const 修饰常量 - 指针常量
  // 指针的指向不可以修改，指针的指向的值可以修改
  int * const p2 = &a;
  *p2 = 100; // 正确
  // p2 = &b; // 错误

  // const 修饰指针和常量
  // 指针的指向 和指针指向的值 都不可以修改
  const int * const p3 = &a;
  // *p3 = 100; // 错误
  // p3 = &b; // 错误
  return 0;
}
