#include <iostream>

using namespace std;

// 静态成员变量
class Person
{
  public:
    // 所有对象都共享同一份数据
    // 编译阶段分配内存
    // 类内声明 类外初始化操作
    static int m_A;

  private:
    static int m_B;
};

// 静态变量类外初始化
int Person::m_A = 10;
// int Person::m_B = 10; // 无法访问 因为是私有作用域

void test01()
{
  Person p;
  cout << p.m_A << endl;

  Person p2;
  p2.m_A = 200;
  cout << p.m_A << endl; // 200 因为静态变量数据是共享的
}

void test02()
{
  // 静态成员变量 不属于某个对象上 所有对象都共享同一份数据
  // 因此静态成员变量有两种访问方式

  // 1. 通过对象进行访问
  Person p;
  cout << p.m_A << endl;
  // 2. 通过类名进行访问
  cout << Person::m_A << endl;
}

int main()
{
  test01();
  cout << "test02----------------" << endl;
  test02();

  return 0;
}
