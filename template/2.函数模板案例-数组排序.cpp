#include <iostream>

using namespace std;

// 实现通用 对数组进行排序的函数
// 规则从大到小
// 算法选择
// 测试char数组 int数组

// 交换算法
template<class T>
void mySwap(T&a, T&b)
{
  T temp = a;
  a = b;
  b = temp;
}

// 排序算法
template<class T>
void mySort(T arr[], int len)
{
  for(int i=0; i<len; i++)
  {
    int max = i;
    for(int j=i+1; j<len; j++)
    {
      // 认定的最大值 比 遍历的数值要小 说明j下标的元素才是真正的最大值
      if(arr[max] < arr[j])
      {
        max = j; // 更新最大值下标
      }
    }
    if(max != i)
    {
      // 交换max和i元素
      mySwap(arr[max], arr[i]);
    }
  }
}

template<class T>
void printInfo(T arr[], int len)
{
  for(int i=0; i<len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void test01()
{
  // 测试char数组
  char charArr[] = "badcfe";
  int len = sizeof(charArr) / sizeof(char);
  mySort(charArr, len);
  printInfo(charArr, len);
}

void test02()
{
  int intArr[] = { 10, 5, 8, 9, 3, 4, 2, 1, 6, 7 };
  int len = sizeof(intArr) / sizeof(int);
  mySort(intArr, len);
  printInfo(intArr, len);
}

int main()
{
  test01();
  test02();

  return 0;
}
