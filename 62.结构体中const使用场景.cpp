#include <iostream>

using namespace std;

struct Student
{
  string name;
  int age;
  int score;
};

void printStudent(const Student *pStu) // 加const防止函数体中的误操作
{
  // pStu->age = 100; // 错误
  cout << "姓名：" 
       << pStu->name
       << " 年龄："
       << pStu->age
       << " 分数："
       << pStu->score
       << endl;
}

int main()
{

  struct Student stu = {"张三", 22, 88};

  printStudent(&stu);

  cout << "姓名：" 
       << stu.name
       << " 年龄："
       << stu.age
       << " 分数："
       << stu.score
       << endl;
  return 0;
}
