#include <iostream>

struct Hero
{
  std::string name;
  int         age;
  std::string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
  for(int i=0; i<len-1; i++)
  {
    for(int j=0; j<len-i-1; j++)
    {
      struct Hero temp = heroArray[j];
      heroArray[j] = heroArray[j+1];
      heroArray[j+1] = temp;
    }
  }
}

void printInfo(struct Hero heroArray[], int len)
{
  for(int i=0; i<len; i++)
  {
    std::cout << "英雄：" 
      << heroArray[i].name 
      << " 年龄：" 
      << heroArray[i].age 
      << " 性别：" 
      << heroArray[i].sex 
      << std::endl;
  }
}

int main(void)
{
  struct Hero heroArray[5] =
  {
    {"刘备", 23, "男"},
    {"关羽", 22, "男"},
    {"张飞", 20, "男"},
    {"赵云", 21, "男"},
    {"貂蝉", 19, "女"}
  };

  int len = sizeof(heroArray) / sizeof(heroArray[0]);

  bubbleSort(heroArray, len);
  printInfo(heroArray, len);


  return 0;
}
