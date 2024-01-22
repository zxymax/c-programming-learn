#include <iostream>

using namespace std;

// 值传递
void swap(int num1, int num2)
{
  cout << "交换前：" << endl;
  cout << num1 << endl;
  cout << num2 << endl;

  cout << "交换后：" << endl;
  int temp = num1;
  num1 = num2;
  num2 = temp;
  cout << num1 << endl;
  cout << num2 << endl;
}

int main()
{
  swap(10, 20);
  return 0;
}
