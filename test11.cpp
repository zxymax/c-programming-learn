#include <iostream>

using namespace std;

class Phone
{
  public:
    Phone(string name)
    {
      m_PhoneName = name;
      cout << "Phone构造" << endl;
    }
    ~Phone()
    {
      cout << "Phone析构" << endl;
    }

    string m_PhoneName;
};

class Person
{
  public:
    Person(string name, string pName) :m_Name(name), m_Phone(pName) {}

    ~Person()
    {
      cout << "Person析构函数" << endl;
    }
    void playGame()
    {
      cout <<  m_Name << "使用" << m_Phone.m_PhoneName << "牌手机" << endl;
    }

    string m_Name;
    Phone m_Phone;
};

void test01()
{
  Person p("张三丰", "华为");  
  p.playGame();
}

int main()
{
  test01();

  return 0;
}
