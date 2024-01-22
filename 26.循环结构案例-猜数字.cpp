#include <iostream>

#include <ctime>
using namespace std;

int main()
{
  // int num = rand() % 100 + 1;
  srand((unsigned int)time(NULL));
  int num = rand() % 100 + 1;
  cout << num;

  int val;
  while(1)
  {
    cout << "Enter your number: " << endl;
    cin >> val;

    if (val > num) {
      cout << "too big" << endl;
    } else if (val < num) {
      cout << "too small" << endl;
    } else {
      cout << "Congratulations!!:)" << endl;
      break;
    }
  }
  return 0;
}
