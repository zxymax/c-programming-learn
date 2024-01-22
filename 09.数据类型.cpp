#include <iostream>

using namespace std;

int main()
{
  /**
   *
   * float 单精度 占用空间4字节  有效数字范围7位有效数字
   * double 双精度 占用空间8字节 有效数字范围15~16有效数字
   */

  float f1 = 3.14f;
  double d1 = 3.14;

  cout << f1 << endl;
  cout << d1 << endl;

  float f3 = 3.1415926f;
  double d3 = 3.1415926;

  cout << f3 << endl;
  cout << d3 << endl;

  cout << "float 占用内存空间为：" << sizeof(float) << endl; // 4
  cout << "float 占用内存空间为：" << sizeof(double) << endl; // 8

  // 科学计数法
  float f2 = 3e2; // 3 * 10^2
  cout << "f2 = " << f2 << endl;

  float f4 = 3e-2; // 3 * 0.1
  cout << "f4 = " << f4 << endl;
  return 0;
}
