#include <iostream>

using namespace std;

class Chef
{
  public:
    void makeChildren()
    {
      cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
      cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
      cout << "The chef makes bbg ribs" << endl;
    }
};

class ItliamChef : public Chef
{
  public:
    void makePasta()
    {
      cout << "The chef makes pasta" << endl;
    }
};

int main()
{
  Chef chef;
  chef.makeChildren();

  ItliamChef itliamChef;
  itliamChef.makeChildren();
  itliamChef.makePasta();

  return 0;
}
