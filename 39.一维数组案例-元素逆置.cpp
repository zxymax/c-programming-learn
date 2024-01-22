#include <iostream>

using namespace std;

int main()
{
  int arr[5] = {1, 3, 2, 5, 4};
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }

  // 逆置
  /**
   * 1. 记录起始位置下标
   * 2. 记录结束位置下标
   * 3. 起始位置下标与结束位置下标的元素互换
   * 4. 起始位置++ 结束位置--
   * 5. 循环执行第1条操作 直到起始位置>=结束位置
   */
  int start = 0;
  int end = sizeof(arr) / sizeof(arr[0]) - 1; // 结束位置下标

  while (start < end)
  {
    // 实现元素互换
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // 下标更新
    start++;
    end--;
  }

  cout << "--------逆置---------\n";
  // 打印逆置后的数组
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}
