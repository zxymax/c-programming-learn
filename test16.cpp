#include <iostream>

using namespace std;

class Person
{
  public:
    Person(int age)
    {
      this->age = age;
    }
    Person& PersonAddAge(Person &p)
    {
      this->age = p.age;
      return *this;
    }
    int age;
};

void test01()
{
  Person p1(18);
  cout << "p1 年龄：" << p1.age << endl;
}

void test02()
{
  Person p1(10);
  Person p2(10);
  p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
  cout << "p2 年龄：" << p2.age << endl;
}

int main()
{
  test01();
  cout << "test02--------------------" << endl;
  test02();

  return 0;
}
