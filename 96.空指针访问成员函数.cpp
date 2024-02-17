#include <iostream>

using namespace std;

class Person
{
  public:
    void showClassName()
    {
      cout << "Person Class" << endl;
    }
    void showClassAge()
    {
      if(this == NULL)
      {
        return;
      }
      cout << "Person Class Age: " << this->m_Age << endl;
    }
    int m_Age;
};

void test01()
{
  Person *p = NULL;
  p->showClassName();
  p->showClassAge();
}

int main()
{
  test01();

  return 0;
}
