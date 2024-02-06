#include <iostream>

using namespace std;

// 默认情况下 编译器至少给一个类添加3个函数

// 1. 默认构造函数（无参，函数体为空）
// 2. 默认析构函数（无参，函数体为空）
// 3. 默认拷贝构造函数 对属性进行拷贝

// 构造函数调用规则如下：
// 如果用户定义有参构造函数 C++不再提供默认无参构造 但会提供默认拷贝构造
// 如果用户定义拷贝构造函数 C++不会在提供其他构造函数

class Person
{
  public:

    Person()
    {
      cout << "默认构造函数" << endl;
    }
    Person(int age)
    {
      m_Age = age;
      cout << "默认构造函数" << endl;
    }
    // Person(const Person &p)
    // {
    //   m_Age = p.m_Age;
    //   cout << "拷贝构造" << endl;
    // }
    ~Person()
    {
      cout << "析构函数" << endl;
    }

    int m_Age;

};

void test01()
{
  Person p;
  p.m_Age = 18;

  Person p2(p);

  cout << "p2的年龄为：" << p2.m_Age << endl;
}
// void test02()
// {
//   Person p(18);
//   Person p2(p);
// }
int main()
{
  test01();
  // test02();

  return 0;
}
