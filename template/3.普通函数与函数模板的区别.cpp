#include <iostream>

// 普通函数调用时可以发生自动类型转换（隐士类型转换）
// 函数模板调用个时 如果利用自动类型推导 不会发生隐士类型转换
// 如果利用显示指定类型的方式 可以发生隐士类型转换

int myAdd01(int a, int b)
{
  return a + b;
}

template<class T>
T myAdd02(T a, T b)
{
  return a + b;
}

int main()
{
  int a = 10;
  int b = 20;
  std::cout << myAdd01(a, b) << std::endl; // 30

  char c = 'c'; // a 对应的ASCII 是90  c对应的ASCII是99
  std::cout << myAdd02(a, b) << std::endl; // 30

  // std::cout << myAdd02(a, c) << std::endl; // 报错

  std::cout << myAdd02<int>(a, c) << std::endl;

  return 0;
}
