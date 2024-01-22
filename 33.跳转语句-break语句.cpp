#include <iostream>

using namespace std;

int main()
{
  // break的使用时机
  cout << "选择副本难度" << endl;
  cout << "1. 普通" << endl;
  cout << "2. 中等" << endl;
  cout << "3. 困难" << endl;

  int select = 0;
  cin >> select;

  switch (select)
  {
    case 1:
      cout << "你选择的难度是普通" << endl;
      break;
    case 2:
      cout << "你选择的难度是中等" << endl;
      break;
    case 3:
      cout << "你选择的难度是困难" << endl;
      break;
    default:
      break;
  }

  // 出现在循环语句中
  for (int i = 0; i < 10; i++)
  {
    if (i == 5) // 如果i等于5 则退出循环 不再打印
    {
      break; // 退出循环
    }
    cout << i << endl;
  }

  // 出现在嵌套循环语句中
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (j == 5) // 如果j等于5 则退出循环 不再打印
      {
        break; // 退出循环
      }
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
