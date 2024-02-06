#include <iostream>

using namespace std;

// 点类
class Point
{
  public:
    // 设置x
    void setX(int x)
    {
      m_X = x;
    }
    // 获取x
    int getX()
    {
      return m_X;
    }

    // 设置y
    void setY(int y)
    {
      m_Y = y;
    }
    // 获取y
    int getY()
    {
      return m_Y;
    }

  private:
    int m_X;
    int m_Y;
};

// 圆类
class Circle
{
  public:
    // 设置半径
    void setR(int r)
    {
      m_R = r;
    }
    // 获取半径
    int getR()
    {
      return m_R;
    }
    // 设置圆心
    void setCircleCenter(Point center)
    {
      m_Center = center; 
    }
    // 获取圆心
    Point getCircleCenter()
    {
      return m_Center;
    }

  private:
    int m_R; // 半径

    // 在类中科院让另一个类 作为本类中的成员
    Point m_Center; // 圆心
};

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
