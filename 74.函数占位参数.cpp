#include <iostream>

using namespace std;


void func(int a, int)
{
  cout << "this is function" << endl;
}

void func2(int a, int=10) // 占位参数也可以有默认值
{
  cout << "this is function2" << endl;
}

int main()
{
  func(10, 10); // 占位参数必须填补

  func2(10);

  return 0;
}
