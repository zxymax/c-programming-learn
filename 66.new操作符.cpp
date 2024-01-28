#include <iostream>

using namespace std;

// new 的基本语法
int *func()
{
  // 在堆区创建整型数据
  // new返回是该数据类型的指针
  int *p = new int(10); // 初始值10
  return p;
}

void test01()
{
  int *p = func();
  cout << *p << endl;
  cout << *p << endl;
  cout << *p << endl;

  // 堆区的数据由程序员管理开辟 程序员管理释放
  // 如果想释放堆区的数据 利用关键字delete
  delete p;
  // cout << *p << endl; // 内存已经被释放 再访问就是非法操作 会报错
}

// 在堆区开辟数组
void test02()
{
  // 创建10整型数据的数组 在堆区
  int *arr = new int[10]; // 10代表数组有10个元素
  for(int i=0; i<10; i++)
  {
    arr[i] = i+100;
  }
  for(int i=0; i<10; i++)
  {
    cout << arr[i] << endl;
  }
  // 释放堆区数组 释放数组的时候要加[]
  delete[] arr;
}

int main()
{

  test01();
  test02();

  return 0;
}
