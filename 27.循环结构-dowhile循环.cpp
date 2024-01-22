#include <iostream>

using namespace std;

int main()
{
  int num = 0;
  // do {
  //   cout << "num = " << num << endl;
  //   num++;
  // } while (num); // 此循环先执行一次循环在判断条件 无限循环

  // while (num) // 此循环不会执行 0 = false
  // {
  //   cout << "num = " << num << endl;
  //   num++;
  // }

  int num2 = 0;
  int num3 = 0;
  do {
    cout << "num2 = " << num2 << endl;
    num2++;
  } while (num2 < 10);

  cout << "------------while------------" << endl;
  while (num3 < 10)
  {
    cout << "num3 = " << num3 << endl;
    num3++;
  }

  return 0;
}
