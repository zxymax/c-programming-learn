#include <iostream>

using namespace std;

// #include "82.point.h"
// #include "82.circle.h"
 #include "82.point.cpp"
 #include "82.circle.cpp"

// 代码拆分

// 判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
  // 计算两点之间的距离 平方
  int distance =
    (c.getCircleCenter().getX() - p.getX()) * (c.getCircleCenter().getX() - p.getX()) +
    (c.getCircleCenter().getY() - p.getY()) * (c.getCircleCenter().getY() - p.getY());

  // 计算半径的平方
  int rDistance = c.getR() * c.getR();

  // 判断
  if(distance == rDistance)
  {
    cout << "点在圆上" << endl;
  }
  else if(distance > rDistance)
  {
    cout << "点在圆外" << endl;
  }
  else
  {
    cout << "点在圆内" << endl;
  }
}

int main()
{

  Circle c;
  c.setR(10);

  Point center;
  center.setX(10);
  center.setY(0);

  c.setCircleCenter(center);

  Point p;
  p.setX(10);
  p.setY(11);

  isInCircle(c, p);


  return 0;
}

