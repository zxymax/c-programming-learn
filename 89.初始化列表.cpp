#include <iostream>

using namespace std;

class Person
{
  public:
    // 传统初始化
    // Person(int a, int b, int c)
    // {
    //   m_A = a;
    //   m_B = b;
    //   m_C = c;
    // }

    // 初始化列表方式初始化
    Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
    void printInfo()
    {
      cout << "m_A:" << m_A << endl;
      cout << "m_B:" << m_B << endl;
      cout << "m_C:" << m_C << endl;
    }
  private:
    int m_A;
    int m_B;
    int m_C;
};


int main()
{
  Person p(10, 20, 30);
  p.printInfo();

  return 0;
}
