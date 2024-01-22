#include <iostream>

using namespace std;

// 1. 无参无返
void test01()
{
  cout << "this is test01" << endl;
}
// 2. 有参无返
void test02(int a)
{
  cout << "this is test02, a = " << a << endl; 
}
// 3. 无惨有返
int test03()
{
  cout << "this is test03" << endl;
  return 100;
}
// 4. 有参有返
int test04(int a)
{
  cout << "this is test04" << endl;
  return a;
}

int main()
{
  test01();
  test02(100);
  test03();
  test04(200);


  return 0;
}
