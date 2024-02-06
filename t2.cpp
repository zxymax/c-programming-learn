#include <iostream>

struct Student
{
  std::string name;
  int         score;
};

struct Teacher
{
  std::string       name;
  struct Student    sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len)
{
  for(int i=0; i<len; i++)
  {
    std::string nameSpeed = "ABCDE";
    tArray[i].name        = "Teacher_";
    tArray[i].name       += nameSpeed[i];
    for(int j=0; j<5; j++)
    {
      tArray[i].sArray[j].name = "Student_";
      tArray[i].sArray[j].name += nameSpeed[j];

      int score = 60;
      tArray[i].sArray[j].score = score;
    }
  }
}

void printInfo(struct Teacher tArray[], int len)
{
  for(int i=0; i<len; i++)
  {
    std::cout << "Teache: " <<  tArray[i].name << std::endl;
    for(int j=0; j<5; j++)
    {
      std::cout << "\tStudent: "
        << tArray[i].sArray[j].name
        << " score: "
        << tArray[i].sArray[j].score
        << std::endl;
    }
  }
}

int main(void)
{
  struct Teacher tArray[3];

  int len = sizeof(tArray) / sizeof(tArray[0]);

  allocateSpace(tArray, len);
  printInfo(tArray, len);

  return 0;
}
