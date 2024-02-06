#include <iostream>

using namespace std;

// 静态成员函数
// 所有对象共享通一个函数
// 静态成员函数只能访问静态成员变量

class Person
{
  public:
    // 静态成员函数
    static void func()
    {
      m_A = 100; // 静态成员函数可以访问静态成员变量
      // m_B = 200; // 报错 静态成员函数 不可以访问 非静态成员变量
      cout << "static void func调用" << endl;
    }

    static int m_A; // 静态成员变量
    int m_B;

  private:
    // 静态成员函数也是有访问权限的
    static void func2()
    {
      cout << "static void func2调用" << endl;
    }

};

int Person::m_A = 0; // 静态成员变量初始化

void test01()
{
  // 1. 通过对象访问
  Person p;
  p.func();

  // 2. 通过类名访问
  Person::func();
  // Person::func2(); // 报错 类外私有作用域下 静态成员函数无法访问
}
int main()
{

  test01();

  return 0;
}
