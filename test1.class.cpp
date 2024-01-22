#include <iostream>

using namespace std;

class Building
{
  friend class GoodGay;
  public:
    Building();
    string m_Sitting_Room;
  private:
    string m_BedRoom;
};
class GoodGay
{
  public:
    GoodGay();
    void visit();
    Building *building;
};

Building::Building()
{
  m_Sitting_Room = "客厅";
  m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
  building = new Building;
}

void GoodGay::visit()
{
  cout << "好基友正在访问：" << building->m_Sitting_Room << endl;
  cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
  GoodGay gg;
  gg.visit();
}

int main()
{

  test01();
  return 0;
}
