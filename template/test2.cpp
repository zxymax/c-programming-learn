#include <iostream>

// 对数组进行排序
// 规则从大到小
// 算法选择

// 交换方法
template<class T>
void mySwap(T&a, T&b)
{
  T temp = a;
  a = b;
  b = temp;
}

template<class T>
void mySort(T arr[], int len)
{
  for(int i=0; i<len; i++)
  {
    int max = i;
    for(int j=i+1; j<len; j++)
    {
      if(arr[max] < arr[j])
      {
        max = j;
      }
    }
    if(max != i)
    {
      mySwap(arr[max], arr[i]);
    }
  }
}

template<class T>
void printInfo(T arr[], int len)
{
  for(int i=0; i<len; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void test01()
{
  char charArr[] = "cdfeab";
  int len = sizeof(charArr) / sizeof(char);
  mySort(charArr, len);
  printInfo(charArr, len);
}

int main(void)
{
  test01();

  return 0;
}

