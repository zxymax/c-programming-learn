#include <iostream>

using namespace std;

class Person
{
  public:
    static int m_A;

  private:
    static int m_B;
};

// 静态变量初始化
int Person::m_A = 0;

void test01()
{
  Person p;
  cout << p.m_A << endl;

  Person p2;
  p2.m_A = 200;
  cout << p2.m_A << endl;
}

void test02()
{
  Person p;
  cout << Person::m_A << endl;
}

int main()
{
  cout << "test01----------------" << endl;
  test01();
  cout << "test02----------------" << endl;
  test02();


  return 0; 
}
