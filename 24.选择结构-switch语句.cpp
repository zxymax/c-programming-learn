#include <iostream>

using namespace std;

int main()
{
  int score = 0;
  cout << "请给电影打分：" << endl;
  cin >> score;
  cout << "电影的分数为：" << score << endl;

  switch (score)
  {
    case 10:
      cout << "这是个经典电影" << endl;
      break;
    case 9:
      cout << "这是个经典电影" << endl;
      break;
    case 8:
      cout << "这是个非常好的电影" << endl;
      break;
    case 7:
      cout << "这是个一般的电影" << endl;
      break;
    case 6:
      cout << "这是个烂电影" << endl;
      break;
    default:
      cout << "这个电影简直没法看";

  }
  return 0;
}
