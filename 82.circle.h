#pragma once // 防止头文件重复包含
#include <iostream>
using namespace std;
#include "82.point.h"


// 圆类
class Circle
{
  public:
    // 设置半径
    void setR(int r);
    // 获取半径
    int getR();
    // 设置圆心
    void setCircleCenter(Point center);
    // 获取圆心
    Point getCircleCenter();

  private:
    int m_R; // 半径

    // 在类中科院让另一个类 作为本类中的成员
    Point m_Center; // 圆心
};

