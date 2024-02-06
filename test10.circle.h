#pragma once
// #include <iostream>
#include "test10.point.h"

// class Circle
class Circle
{
  public:
    void setR(int r);
    int getR();
    void setCircleCenter(Point Center);
    Point getCircleCenter();
  private:
    int m_R;
    Point m_Center;
};
