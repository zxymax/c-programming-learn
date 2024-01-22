#include <iostream>

using namespace std;

int main()
{
  int score = 0;
  cout << "请输入你的分数：" << endl;
  cin >> score;

  cout << "你的分数是：" << score << endl;

  if (score > 600) {
    if (score > 700) {
    cout << "恭喜你！考上了北大学" << endl;
    } else if (score > 650) {
      cout << "恭喜你！考上了清华大学" << endl;
    } else {
      cout << "恭喜你！考上了人大大学" << endl;
    }
  } else if(score > 500) {
    cout << "恭喜你！考上了二本大学" << endl;
  } else if(score > 400) {
    cout << "恭喜你！考上了三本大学" << endl;
  } else {
    cout << "未考上一本大学(:" << endl;
  }
  return 0;
}
