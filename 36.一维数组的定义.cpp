#include <iostream>

using namespace std;

int main()
{
  /**
   * **********数组***************
   * 1. 数组类型 数组名[数组长度]
   * 2. 数组类型 数组名[数组长度] = { 值1, 值2, 值3}
   * 3. 数据类型 数组名[] = { 值1, 值2, 值3}
   */

  int arr[5];
  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 2;
  arr[3] = 3;
  arr[4] = 4;

  cout << "arr[0] = " << arr[0] << endl;
  cout << "arr[4] = " << arr[4] << endl;

  int arr2[5] = {10, 20, 30}; // 如果在初始化的时候，没有全部写完，会用0来填补剩余数据
  for (int i = 0; i < 5; i++)
  {
    cout << arr2[i] << endl;
  }

  int arr3[] = {20, 30, 40, 50, 60};
  for (int i = 0; i < 5; i++)
  {
    cout << arr3[i] << endl;
  }


  return 0;
}
