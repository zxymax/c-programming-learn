#include <iostream>

using namespace std;

int main()
{
  int a = 10;

  int *p = &a;

  cout << "sizeof (int *) = " << sizeof(p) << endl;
  cout << "sizeof (int *) = " << sizeof(int *) << endl;
  cout << "sizeof (float *) = " << sizeof(float *) << endl;
  cout << "sizeof (double *) = " << sizeof(double *) << endl;
  cout << "sizeof (char *) = " << sizeof(char *) << endl;

  return 0;
}
