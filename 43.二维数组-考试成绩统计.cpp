#include <iostream>

using namespace std;

int main()
{
  int scores[3][3] =
  {
    {100, 100, 100},
    {90, 80, 90},
    {80, 75, 100}
  };

  string names[] = { "张三", "李四", "王五" };

  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
      sum += scores[i][j];
    }
    cout << names[i] << " 的成绩为：" << sum << " ";
    cout << endl;
  }

  return 0;
}
