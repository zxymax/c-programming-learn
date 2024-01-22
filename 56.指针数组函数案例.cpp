#include <iostream>

using namespace std;

void bubbleSort(int *arr, int len)
{
  for (int i = 0; i < len-1; i++)
  {
    for (int j = 0; j < len - i - 1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void printArr(int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << endl;
  }
}

int main()
{
  int arr[10] = {9, 8, 4, 5, 7, 6, 3, 1, 2, 10};

  cout << arr << endl;

  int len = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, len);

  printArr(arr, len);


  return 0;
}
