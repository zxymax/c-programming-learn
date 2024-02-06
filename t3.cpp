#include <iostream>

struct Student
{
  std::string name;
  int         age;
  int         score;
};

void printStudent(const Student *pStu)
{
  std::cout << "姓名："
    << pStu->name
    << " 年龄："
    << pStu->age
    << " 分数："
    << pStu->score
    << std::endl;
}

int main(void)
{
  struct Student stu = {"许三多", 18, 100};

  printStudent(&stu);

  std::cout << "姓名："
    << stu.name
    << " 年龄："
    << stu.age
    << " 分数："
    << stu.score
    << std::endl;

  return 0;
}
