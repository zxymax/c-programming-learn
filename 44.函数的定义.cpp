#include <iostream>

using namespace std;

int add(int num1, int num2)
{
  int sum = num1 + num2;
  return sum;
}

int main()
{

  int result = add(10, 20);
  cout << "Result: " << result << endl;

  return 0;
}


