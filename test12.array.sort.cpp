#include <iostream>

using namespace std;

int main()
{
  int arr[5] = {10, 100, 5, 200, 90};
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << endl;
  }

  for (int i = 0; i < len-1; i++)
  {
    for (int j = 0; j < len-i-1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  cout << "---------------------------" << endl;

  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}
