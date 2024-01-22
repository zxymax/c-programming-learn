#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 10;
  int c = 0;
  int d = 0;
  cout << "!a" << !a << endl;
  cout << "!!a" << !!a << endl;

  cout << "(a&&b)" << (a&&b) << endl;
  cout << "(a&&c)" << (a&&c) << endl;

  cout << "(c&&d)" << (c&&d) << endl;


  cout << "(a||b)" << (a||b) << endl;
  cout << "(a||c)" << (a||c) << endl;
  cout << "(c||d)" << (c||d) << endl;

  return 0;
}
