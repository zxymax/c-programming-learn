#include <iostream>

using namespace std;

// 拷贝构造函数调用时机通常有三种情况
// 1. 使用一个已经创建完毕的对象来初始化一个新对象
// 2. 值传递的方式给函数参数传值
// 3. 以值方式返回局部对象

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
      cout << "有参构造" << endl;
    }
    Person(const Person &p)
    {
      m_Age = p.m_Age;
      cout << "拷贝构造函数" << endl;
    }
    ~Person()
    {
      cout << "析构函数" << endl;
    }

    int m_Age;
};

// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
  Person p1(20);
  Person p2(p1);
  cout << "拷贝构造p2的年龄：" << p2.m_Age << endl;
}

// 2. 值传递的方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
  Person p;
  doWork(p);
}

// 3. 以值方式返回局部对象
Person doWork2()
{
  Person p;
  cout << (int *)&p << endl;
  return p;
}
void test03()
{
  Person p = doWork2();
  cout << (int *)&p << endl;
}
int main()
{
  cout << "test01-----------------" << endl;
  test01();
  cout << "test02-----------------" << endl;
  test02();
  cout << "test03-----------------" << endl;

  test03();

  return 0;
}
