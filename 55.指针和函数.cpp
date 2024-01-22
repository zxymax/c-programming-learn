#include <iostream>

using namespace std;

void swap01(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;

  cout << "swap01 - a = " << a << endl;
  cout << "swap01 - b = " << b << endl;
}

void swap02(int *p1, int *p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;

  cout << "swap01 - a = " << *p1 << endl;
  cout << "swap01 - b = " << *p2 << endl;
}

int main()
{

  int a = 10;
  int b = 20;

  swap01(a, b);

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  cout << "-----------------------" << endl;

  swap02(&a, &b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}
