#include <iostream>

using namespace std;

int main()
{
  // 1. C风格字符串
  // 注意事项 char 字符串名 []
  // 注意事项2 等号后面要用双引号包含起来字符串
  char str[] = "Hello World";
  cout << str << endl;

  // 2. C++风格字符串
  string str2 = "Hello World"; 
  cout << str2 << endl;

  return 0;
}
