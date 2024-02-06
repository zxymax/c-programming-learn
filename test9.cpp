#include <iostream>

using namespace std;

const int MAX = 1000;

struct Person
{
  string m_Name;
  int m_Age;
  int m_Sex;
  string m_Phone;
  string m_Address;
};
struct AddressBooks
{
  struct Person personArray[MAX];
  int m_Size;
};

void addPerson(struct AddressBooks *abs)
{
  if(abs->m_Size == MAX)
  {
    cout << "通讯录已满，无法再添加！" << endl;
    return;
  }
  else
  {
    string name;
    int age;
    int sex;
    string phone;
    string address;

    cout << "请输入姓名：" << endl;
    cin>>name;
    abs->personArray[abs->m_Size].m_Name = name;
    cout << "姓名：" << name << endl;

    cout << "请输入年龄：" << endl;
    cin>>age;
    while(true)
    {
      if(age<=0 || age>=100)
      {
        cout << "输入有误！" << endl;
      }
      else
      {
        abs->personArray[abs->m_Size].m_Age = age;
        cout << (sex==1 ? "男" : "女") << endl;
        break;
      }
    }

    abs->m_Size++;
    cout << "添加成功" << endl;

  }
}

void showPerson(struct AddressBooks *abs)
{
  cout <<"------------" << abs->m_Size << endl;
  if(abs->m_Size == 0)
  {
    cout << "当前记录为空！请添加联系人" << endl;
    return;
  }
  for(int i=0; i<abs->m_Size; i++)
  {
    cout << "姓名：" << abs->personArray[i].m_Name << "\t";
    cout << "年龄：" << abs->personArray[i].m_Age << "\t";
  }
}

void showMenu()
{
  cout << "*************************" << endl;
  cout << "***** 1、添加联系人 *****" << endl;
  cout << "***** 2、显示联系人 *****" << endl;
  cout << "***** 3、删除联系人 *****" << endl;
  cout << "***** 4、查找联系人 *****" << endl;
  cout << "***** 5、修改联系人 *****" << endl;
  cout << "***** 6、清空联系人 *****" << endl;
  cout << "***** 0、退出通讯录 *****" << endl;
  cout << "*************************" << endl;
}

int main()
{
  struct AddressBooks abs;
  abs.m_Size = 0;
  int select = 0;
  cout << "helo--------------" << endl;
  while(true)
  {
    showMenu();
    cin>>select;

    switch(select)
    {
      case 1: addPerson(&abs); break;
      case 2: showPerson(&abs); break;
      case 0: return 0; break;
      default: 
         cout << "输入有误！！！！" << endl;
         break;

    }

  }

  return 0;
}
