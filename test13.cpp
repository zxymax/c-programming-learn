#include <iostream>

using namespace std;

class Person
{
  public:
    static void func()
    {
      m_A = 100;
      cout << "static void func调用" << endl;
    }

    static int m_A;
    int m_B;

  private:
    static void func2()
    {
      cout << "static void func2调用" << endl;
    }
};

int Person::m_A = 0;

void test01()
{
  Person p;
  p.func();

  Person::func();
}

int main()
{
  test01();

  return 0;
}
