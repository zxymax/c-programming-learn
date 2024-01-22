#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;
  int c = 0;

  c = (a > b ? a : b) = 100;

  cout << "c = " << c << endl;

  return 0;
}
