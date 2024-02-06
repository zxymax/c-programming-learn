#include <iostream>

using namespace std;

class Student
{
  public:
    string m_name;
    int m_stuId;

    void setStudentInfo(string name, int stuId)
    {
      m_name = name;
      m_stuId = stuId;
    }
    void getStudentInfo()
    {
      cout << "name: " << m_name << endl;
      cout << "stuId: " <<m_stuId << endl;
    }

};

int main()
{
  Student stu;
  stu.setStudentInfo("张三", 11000);
  stu.getStudentInfo();

  return 0;
}
