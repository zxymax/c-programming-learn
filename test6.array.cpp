#include <iostream>

using namespace std;

//  数组逆置

int main()
{

  int arr[5] = {100, 20, 200, 90, 80};
  int len = sizeof(arr) / sizeof(arr[0]);

  cout << "---------------------\n";

  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << endl;
  }

  cout << "---------------------\n";

  int start = 0;
  int end = len - 1;

  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }

  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}
