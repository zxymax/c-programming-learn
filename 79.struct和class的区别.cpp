#include <iostream>

using namespace std;

// 在C++中struct和class的唯一区别在于 默认的访问权限不同

// 区别
// struct 默认访问权限公共
// class 默认访问权限私有


struct SC1
{
  int m_A; // 默认是公共权限
};

class CC2
{
  int m_A; // 默认权限是私有
};

int main()
{
  SC1 sc1;
  sc1.m_A = 100;

  CC2 cc2;
  // cc2.m_A = 100; // 报错

  return 0;
}
