#include <iostream>

using namespace std;

// 成员属性设置私有
// 1. 可以自己控制读写权限
// 2. 对于写可以检测数据有效性

class Person
{
  public:
    void setName(string name)
    {
      m_Name = name;
    }
    string getName()
    {
      return m_Name;
    }
    int getAge()
    {
      return m_Age;
    }
    void setIdo1(string ido1)
    {
      m_Ido1 = ido1;
    }
  private:
    string m_Name; // 可读可写

    int m_Age; // 只读

    string m_Ido1; // 只写
};

int main()
{

  Person p1;
  p1.setName("Lucy");
  p1.getAge();
  p1.setIdo1("Wing");

  return 0;
}
