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
    tArray[i].name ="Teacher_";
    tArray[i].name += nameSeed[i];
    for(int j=0; j<5; j++)
    {
      tArray[i].sArray[j].name = "Student_";
      tArray[i].sArray[j].name += nameSeed[j];

      int score = rand() % 61 + 40;
      tArray[i].sArray[j].score = score;
    }
  }
}

void printInfo(struct Teacher tArray[], int len)
{
  for(int i=0; i<len; i++)
  {
    cout << "Teacher: " << tArray[i].name << endl;
    for(int j=0; j<5; j++)
    {
      cout << "Student: " << tArray[i].sArray[j].name << " score: " << tArray[i].sArray[j].score << endl;
    }
  }
}


int main()
{
  srand((unsigned int)time(NULL));

  struct Teacher tArray[3];

  int len = sizeof(tArray) / sizeof(tArray[0]);
 
  allocateSpace(tArray, len);
  printInfo(tArray, len);

  return 0;
}
