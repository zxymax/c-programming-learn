#include <iostream>

using namespace std;


struct Student
{
  string name;
  int age;
  int score;

};

void printStudent(const Student *pStu)
{
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
  struct Student stu = {"Taisukel", 22, 99};

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
