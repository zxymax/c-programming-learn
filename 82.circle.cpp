#include "82.circle.h"

void Circle::setR(int r)
{
  m_R = r;
}
// 获取半径
int Circle::getR()
{
  return m_R;
}
// 设置圆心
void Circle::setCircleCenter(Point center)
{
  m_Center = center; 
}
// 获取圆心
Point Circle::getCircleCenter()
{
  return m_Center;
}

