#include <iostream>

using namespace std;

#include <ctime>

struct Student
{
  string name;
  int score;
};
struct Teacher
{
  string name;
  struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len)
{
  for(int i=0; i<len; i++) 
  {
    string nameSeed = "ABCDE";
    tArray[i].name = "Teacher_";
    tArray[i].name += nameSeed[i];

    for(int j=0; j<5; j++)
    {
      tArray[i].sArray[j].name = "Student_";
      tArray[i].sArray[j].name += nameSeed[j];

      int randomScore = rand() % 61 + 40;
      tArray[i].sArray[j].score = randomScore;
    }
  }
}

void printInfo(struct Teacher tArray[], int len)
{
  for(int i=0; i<len; i++)
  {
    cout << "老师：" << tArray[i].name << endl;
    for(int j=0; j<5; j++)
    {
      cout << "学生：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
    }
  }
}

int main()
{
  srand((unsigned int)time(NULL));

  // 1. 创建3名老师的数组
  struct Teacher tArray[3];

  // 2. 通过函数给3名老师的信息赋值 并给老师的学生信息赋值
  int len = sizeof(tArray) / sizeof(tArray[0]);
  allocateSpace(tArray, len);

  // 打印
  printInfo(tArray, len);

  return 0;
}
