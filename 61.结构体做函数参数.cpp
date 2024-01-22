#include <iostream>

using namespace std;

struct Student
{
  string name;
  int age;
  int score;
};

void printStudent1(struct Student stu)
{
  stu.age = 33;
  cout << "姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
}

void printStudent2(struct Student *pStu)
{
  pStu->age = 18;
  cout << "姓名：" << pStu->name << " 年龄：" << pStu->age << " 分数：" << pStu->score << endl;
}


int main()
{
  Student st1;
  st1.name = "张三";
  st1.age = 22;
  st1.score = 99;

  printStudent1(st1);
  cout << "姓名：" << st1.name << " 年龄：" << st1.age << " 分数：" << st1.score << endl;

  cout << "---------------------" << endl;

  printStudent2(&st1);
  cout << "姓名：" << st1.name << " 年龄：" << st1.age << " 分数：" << st1.score << endl;
  return 0;
}
