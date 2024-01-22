#include <iostream>

using namespace std;

struct Student
{
  string name;
  int age;
  int score;
};

int main()
{
  Student st1 = {"张三", 22, 99}; // struct 关键字可以省略

  Student *p = &st1; // struct 关键字可以省略

  p->age = 33;
  p->score = 88;

  cout << "姓名："
       << p->name
       << " 年龄："
       << p->age
       << " 分数："
       << p->score
       << endl;
  

  return 0;
}
