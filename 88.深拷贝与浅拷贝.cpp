#include <iostream>

using namespace std;

class Person
{
  public:
    Person()
    {
      cout << "默认构造函数" << endl;
    }
    Person(int age, int height)
    {
      m_Age = age;
      m_Height = new int(height);
      cout << "默认构造函数" << endl;
    }
    // 自己实现拷贝构造函数 来解决浅拷贝带来的问题
    Person(const Person &p)
    {
      m_Age = p.m_Age; // 浅拷贝操作
      m_Height = new int(*p.m_Height); // 深拷贝操作
    }
    ~Person()
    {
      // 析构代码 将堆区开辟数据做释放操作
      if(m_Height!=NULL)
      {
        delete m_Height;
        m_Height = NULL;
      }
      cout << "析构函数" << endl;
    }
    int m_Age;
    int *m_Height;

};

void test01()
{
  Person p(10, 168);
  cout << "p的年龄：" << p.m_Age << " 身高：" << *p.m_Height << endl;
  Person p2(p);
  cout << "p2 的年龄：" << p2.m_Age << " 身高：" << *p2.m_Height << endl;
}

int main()
{
  test01();

  return 0;
}

// 总结：如果属性有在堆区开辟的 一定要自己提供拷贝构造函数 防止浅拷贝带来的问题
