#include <iostream>

using namespace std;

int max(int a, int b);

int main()
{

  int result = max(10, 20);
  cout << "result: " << result << endl;
  return 0;
}

int max(int a, int b)
{
  return a > b ? a : b;
}
