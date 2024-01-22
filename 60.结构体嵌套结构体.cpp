#include <iostream>

using namespace std;

struct Student
{
  string name;
  int age;
  int score;
};

struct Teacher
{
  int id;
  string name;
  int age;
  int score;
  Student st1; // 子结构体学生
};

int main()
{
  Teacher t1;
  t1.id = 10000;
  t1.name = "老王";
  t1.age = 55;

  t1.st1.name = "小王";
  t1.st1.age = 20;
  t1.st1.score = 60;

  cout << "教师职工编号："
       << t1.id
       << " 姓名："
       << t1.name
       << " 年龄："
       << t1.age
       << endl;

  cout << "辅导学员姓名："
       << t1.st1.name
       << " 年龄："
       << t1.st1.age
       << " 分数："
       << t1.st1.score
       << endl;


  return 0;
}
