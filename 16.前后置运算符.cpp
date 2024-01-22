#include <iostream>

using namespace std;

/**
 * 前置递增和后置递增的区别：
 *
 * 前置递增 先让变量+1 后进行表达式运算
 * 后置递增 先进行表达式运算 后让变量+1
 */

int main()
{
  // 1. 前置递增
  int a = 10;
  ++a;
  cout << "a = " << a << endl;
  // 2. 后置递增
  int b = 10;
  b++;
  cout << "b = " << b << endl;

  int a2 = 10;
  int b2 = ++a2 * 10;
  cout << "a2 = " << a2 << endl;
  cout << "b2 = " << b2 << endl;

  int a3 = 10;
  int b3 = a3++ * 10;
  cout << "a3 = " << a3 << endl;
  cout << "b3 = " << b3 << endl;

  return 0;
}
