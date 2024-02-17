#include <iostream>

using namespace std;

template <class T>
void mySwap(T& a, T& b)
{
  T temp = a;
  a = b;
  b = temp;
}

template<class  T>
void func2()
{
  cout << "func 调用" << endl;
}

int main()
{
  int a = 10;
  int b = 20;
  mySwap<int>(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  float c = 2.13;
  float d = 4.32;
  mySwap<float>(c, d);
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;

  func2<int>();

  return 0;
}
