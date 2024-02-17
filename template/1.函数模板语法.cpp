#include <iostream>

using namespace std;

template <class T>
void mySwap(T& a, T& b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{

  int a = 10;
  int b = 20;
  // 自动推导
  // mySwap(a, b);

  // 显示指定类型
  mySwap<int>(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  double c = 3.12;
  double d = 4.99;
  mySwap<double>(c, d);
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;

  return 0;
}
