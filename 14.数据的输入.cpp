#include <iostream>

using namespace std;

int main()
{
  // 1. 整型
  int a = 0;
  cout << "请给整型变量a赋值：" << endl;
  cin >> a;
  cout << "整型变量a = " << a << endl;
  // 2. 浮点型
  float f = 3.14f;
  cout << "请给浮点型变量f赋值：" << endl;
  cin >> f;
  cout << "整型变量f = " << f << endl;
 
  // 3. 字符型
  char ch = 'a';
  cout << "请给字符变量ch赋值：" << endl;
  cin >> ch;
  cout << "整型变量ch = " << ch << endl;

  // 4. 字符串型
  string str = "hello world";
  cout << "请给字符串变量str赋值：" << endl;
  cin >> str;
  cout << "整型变量str = " << str << endl;
  
  // 5. 布尔型
  bool flag = false;
  cout << "请给布尔变量flag赋值：" << endl;
  cin >> flag;
  cout << "整型变量flag = " << flag << endl;
  return 0;
}
