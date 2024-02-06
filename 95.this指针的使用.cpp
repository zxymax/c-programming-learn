#include <iostream>

using namespace std;

// 在类的非静态成员函数中返回对象本身 可使用*this

class Person
{
  public:
    Person(int age)
    {
      // this 指针指向 被调用的成员函数 所属的对象
      this->age = age;
    }
    Person& PersonAddAge(Person &p)
    {
      this->age += p.age;
      return *this;
    }
    int age;

};

// 解决名称冲突
void test01()
{
  Person p1(18);
  cout << "p1 年龄：" << p1.age << endl;
}

// 返回对象本身使用*this
void test02()
{
  Person p1(10);
  Person p2(10);
  p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1); // 链式编程思想
  cout << "p2 年龄：" << p2.age << endl;
}

int main()
{
  test01();
  cout << "test02-----------------" << endl;
  test02();


  return 0;
}
