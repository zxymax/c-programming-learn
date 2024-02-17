#include <iostream>

// 普通函数与函数模板调用规则
// 1. 如果函数模板和普通函数都可以调用 优先调用普通函数
// 2. 可以通过空模板参数列表 强制调用 函数模板
// 3. 函数模板可以发生函数重载
// 4. 如果函数模板可以产生更好的匹配 优先调用函数模板

void myPrint(int a, int b)
{
  std::cout << "调用的的普通函数" << std::endl;
}

template<class T>
void myPrint(T a, T b)
{
  std::cout << "调用的模板" << std::endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
  std::cout << "调用重载的模板" << std::endl;
}
void test01()
{
  int a = 10;
  int b = 20;
  myPrint(a, b);// 默认调用普通函数

  std::cout << "------------------------" << std::endl;

  myPrint<>(a, b); // 通过空模板参数列表 强制调用函数模板

  std::cout << "------------------------" << std::endl;

  myPrint(a, b, 100);


  std::cout << "------------------------" << std::endl;

  char c1 = 'a';
  char c2 = 'b';
  myPrint(c1, c2);

}
int main()
{
  test01(); 



  return 0;
}
