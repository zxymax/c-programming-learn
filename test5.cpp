#include <iostream>

using std::cout;
using std::endl;
using std::string;

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
  struct Student stu;
};

int main()
{
  struct Teacher t1;
  t1.id = 10000;
  t1.name = "老王";

  t1.stu.name = "小王";
  t1.stu.age = 22;
  t1.stu.score = 60;

  cout << "教职工编号："
       << t1.id
       << " 姓名："
       << t1.name
       << endl;

  cout << "教导学员姓名："
       << t1.stu.name
       << " 年龄："
       << t1.stu.age
       << " 分数："
       << t1.stu.score
       << endl;

  return 0;
}
