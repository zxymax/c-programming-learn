#include <iostream>

using namespace std;

int main()
{
  int score = 0;
  cout << "请输入你的分数：" << endl;
  cin >> score;

  cout << "你的分数是：" << score << endl;

  if (score > 600) {
    cout << "恭喜你！考上了一本大学" << endl;
  } else {
    cout << "未考上一本大学(:" << endl;
  }
  return 0;
}
