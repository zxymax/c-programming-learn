#include <iostream>

using namespace std;

/**
 * 标识符命名规则
 * 1. 标识符不可以是关键字
 * 2. 标识符是由字母、数字、下划线组成
 * 3. 标识符第一个字符只能是字母或下划线
 * 4. 标识符是区分大小写的
 */

int main()
{
  // 1. 标识符不可以是关键字
  // int int  = 10;

  // 2. 标识符是由字母、数字、下划线组成
  int abc = 10;
  int _abc = 20;
  int _123abc = 30;

  cout << "a: " << abc << endl;
  cout << "_abc: " << _abc << endl;
  cout << "_123abc: " << _123abc << endl;

  // 3. 标识符第一个字符只能是字母或下划线
  // int 123abc = 40;

  // 4. 标识符区分大小写
  int aaa = 10;
  int AAA = 100;
  cout << "aaa" << aaa << endl;
  cout << "AAA" << AAA << endl;
  return 0;
}

