#include <iostream>
#include <ctime>

using std::cout;
using std::endl;
using std::string;

struct Student
{
  string   name;
  int      score;
};
struct Teacher
{
  string name;
  struct Student sArray[5];
};

void allcoateSpace(struct Teacher tArray[], int len)
{
  for(int i=0; i<len; i++)
  {
    string nameSpeed = "ABCDE";
    tArray[i].name = "Teacher_";
    tArray[i].name += nameSpeed[i];

    for(int j=0; j<5; j++)
    {
      tArray[i].sArray[j].name = "Student_";
      tArray[i].sArray[j].name += nameSpeed[j];

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
      cout << "\t学生：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
    }
  }
}

int main(void)
{
  srand((unsigned int)time(NULL));
  struct Teacher tArray[3];

  int len = sizeof(tArray) / sizeof(tArray[0]);
  allcoateSpace(tArray, len);
  printInfo(tArray, len);


  return 0;
}

