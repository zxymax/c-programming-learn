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
  struct Student studentArray[3] =
  {
    {"张三", 20, 99},
    {"李四", 22, 89},
    {"王五", 25, 100}
  };

  studentArray[2].name = "赵六";
  studentArray[2].age = 33;
  studentArray[2].score = 99;

  for (int i = 0; i < 3; i++)
  {
    cout << "姓名：" 
         << studentArray[i].name 
         << " 年龄：" 
         << studentArray[i].age 
         << " 分数：" 
         << studentArray[i].score 
         << endl;
  }
  return 0;
}
