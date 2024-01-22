#include <iostream>

using namespace std;

struct Student
{
  string name;
  int age;
  int score;
}st3;

int main()
{
  // 结构体变量创建方式
  struct Student st1;
  st1.name = "张三";
  st1.age = 30;
  st1.score = 90;
  cout << "姓名：" << st1.name << " 年龄：" << st1.age << " 分数：" << st1.score << endl;

  struct Student st2 = {"李四", 28, 80};
  cout << "姓名：" << st2.name << " 年龄：" << st2.age << " 分数：" << st2.score << endl;

  st3.name = "王五";
  st3.age = 35;
  st3.score = 79;
  cout << "姓名：" << st3.name << " 年龄：" << st3.age << " 分数：" << st3.score << endl;


  return 0;
}
