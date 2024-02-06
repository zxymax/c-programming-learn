#include <iostream>

using std::cout;
using std::endl;

#include "test10.circle.cpp"
#include "test10.point.cpp"

void isInCircle(Circle &c, Point &p)
{
  int distance =
    (c.getCircleCenter().getX() - p.getX()) * (c.getCircleCenter().getX() - p.getX()) +
    (c.getCircleCenter().getY() - p.getY()) * (c.getCircleCenter().getY() - p.getY());

  int rDistance = c.getR() * c.getR();

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
  center.setY(10);
  c.setCircleCenter(center);

  Point p;
  p.setX(10);
  p.setY(10);
  
  isInCircle(c, p);

  return 0;
}
