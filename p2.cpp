#include <iostream>

using std::cout;
using std::endl;

void bubbleSort(int *arr, int len)
{
  for(int i=0; i<len-1; i++)
  {
    for(int j=0; j<len-i-1; j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void printInfo(int *arr, int len)
{
  for(int i=0; i<len; i++)
  {
    cout << arr[i] << endl;
  }
}

int main(void)
{
  int arr[10] = {9,0,4,5,6,7,1,8,10,3};
  // cout << arr << endl;
  // 
  int len = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, len);
  printInfo(arr, len);

  
  return 0;
}
