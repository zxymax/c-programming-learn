#include <iostream>

using namespace std;

/*
 * 常量的定义方式
 * 1. #define 宏常量
 * 2. const 修饰的变量
 */

// 1. define 宏常量
#define Day 7

int main()
{
  cout << "一周共有：" << Day << " 天" << endl;

  // 2. const 修饰的变量
  const int month = 12;
  cout << "一年总共有：" << month << " 个月份" << endl;
  return 0;
}
