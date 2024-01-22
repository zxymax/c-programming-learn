#include <iostream>

using namespace std;

int main()
{

  // break 的使用时机
  cout << "Selecting the difficulty of a copy" << endl;
  cout << "normal" << endl;
  cout << "medium" << endl;
  cout << "difficult" << endl;

  int select = 0;
  cin >> select;

  switch (select)
  {
    case 1:
      cout << "The difficulty you have selected is normal" << endl;
      break;
    case 2:
      cout << "The difficulty you have selected is medium" << endl;
      break;
    case 3:
      cout << "The difficulty you have selected is difficult" << endl;
      break;
    default:
      break;
  }

  // for
  for (int i = 0; i < 10; i++)
  {
    if (i == 5)
    {
      break;
    }
    cout << i << endl;
  }

  // for... for
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (j == 5)
      {
        break;
      }
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
