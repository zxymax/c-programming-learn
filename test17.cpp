#include <iostream>

using namespace std;

class Person
{
};

class Person2
{
  int m_A;
  static int m_B;
  void func()
  {

  }
  static void func2()
  {

  }

};
int Person2::m_B= 0;

void test01()
{
  Person p;
  cout << "sizeof p = " << sizeof(p) << endl;
}
void test02()
{
  Person2 p2;
  cout << "sizeof p2 = " << sizeof(p2) << endl;
}

int main()
{
  test01();
  test02();

  return 0;
}
