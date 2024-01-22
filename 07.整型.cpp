#include <iostream>

using namespace std;

int main()
{
  // 整型

  // 1. 短整型 取值范围(-2^15 ~ 2^15-1) 占用空间 2字节
  short num1 = 10;

  // 2. 整型  取值范围(-2^31 ~ 2^31-1) 占用空间 2字节

  int num2 = 100;

  // 3. 长整型 取值范围(-2^31 ~ 2^31-1) 占用空间 Windows 占4字节 Linux 占4字节(32位), 8字节(64位)
 
  long num3 = 1000;

  // 4. 长长整型 取值范围(-2^63 ~ 2^63-1) 占用空间 8字节

  long long num4 = 10000;

  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;
  cout << "num3 = " << num3 << endl;
  cout << "num4 = " << num4 << endl;

  return 0;
}
