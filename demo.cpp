// 通讯录
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define MAX 1000

struct Person
{
  string m_Name;
  int m_Age;
  int m_Sex;
  string m_Phone;
  string m_Address;

};
struct AddPersonBooks
{
  struct Person personArray[MAX];
  int m_Size = 0;
};

void addPerson(struct AddPersonBooks *abs);
void deletePerson(struct AddPersonBooks *abs);
void modifyPerson(struct AddPersonBooks *abs);
void findPerson(struct AddPersonBooks *abs);
void showPeople(struct AddPersonBooks *abs);
void cleanPerson(struct AddPersonBooks *abs);
void showMenu();

int main()
{
  struct AddPersonBooks abs;


  int select = 0;

  while(true)
  {
    showMenu();
    cin >> select;
    switch(select)
    {
      case 1:
        addPerson(&abs);
        break;
      case 2:
        showPeople(&abs);
        break;
      case 3:
        findPerson(&abs);
        break;
      case 4:
        deletePerson(&abs);
        break;
      case 5:
        modifyPerson(&abs);
        break;
      case 6:
        cleanPerson(&abs);
        break;
      case 0:
        cout << "欢迎下次继续使用！" << endl;
        return 0;
        break;
    }
  }

  return 0;
}

void addPerson(struct AddPersonBooks *abs)
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
    cout << "姓名：" << endl;

    cout << "请输入性别：" << endl;
    while(true)
    {
      cin>>sex;
      if(sex==1 || sex==2)
      {
        abs->personArray[abs->m_Size].m_Sex = sex;
        cout << "性别：" << sex << endl;
        break;
      }
      else
      {
        cout << "请重新输入！" << endl;
      }
    }
    cout << "请输入年龄：" << endl;
    while(true)
    {
      cin>>age;
      if(age >=1 && age<=100)
      {
        abs->personArray[abs->m_Size].m_Age = age;
        cout << "年龄：" << endl;
        break;
      }
      else
      {
        cout << "请重新输入！年龄范围在1~99之间" << endl;
      }
    }

    cout << "请输入电话：" << endl;
    cin >> phone;
    abs->personArray[abs->m_Size].m_Phone = phone;
    cout << "电话：" << phone << endl;

    cout << "请输入地址：" << endl;
    cin >> address;
    abs->personArray[abs->m_Size].m_Address = address;
    cout << "地址：" << address << endl;


    abs->m_Size++;
    cout << "添加成功！" << endl;

    return;


  }
}


int isExist(struct AddPersonBooks *abs, string name)
{
  for(int i=0; i<abs->m_Size; i++)
  {
    if(abs->personArray[i].m_Name == name)
    {
      return i;
    }
  }
  return -1;
}

void findPerson(struct AddPersonBooks *abs)
{
  string name;
  cin>>name;
  int ret = isExist(abs, name);
  if(ret != -1)
  {
      cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
      cout << "性别：" << (abs->personArray[ret].m_Sex==1 ? "男" : "女") << "\t";
      cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
      cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
      cout << "地址：" << abs->personArray[ret].m_Address << "\t";
      cout << endl;
  }
  else
  {
    cout << "查无此人！" << endl;
    return;
  }
}

void deletePerson(struct AddPersonBooks *abs)
{
  cout << "请输入要删除的联系人：" << endl;
  string name;
  cin>>name;
  int ret = isExist(abs, name);
  if(ret != -1)
  {
    for(int i=0; i<abs->m_Size; i++)
    {
      abs->personArray[i] = abs->personArray[i+1];
    }
    abs->m_Size--;
    cout << "删除成功!" << endl;
  }
  else
  {
    cout << "查无此人！" << endl;
  }
}
void modifyPerson(struct AddPersonBooks *abs)
{

  string name;
  cout << "请输入要修改的联系人的姓名：" << endl;
  cin>>name;
  int ret = isExist(abs, name);
  if(ret != -1)
  {
    int age;
    int sex;
    string phone;
    string address; 

    cout << "新的姓名：" << endl;
    cin>>name;
    abs->personArray[ret].m_Name = name;
    cout << "姓名：" << name <<  endl;

    cout << "请输入性别：" << endl;
    while(true)
    {
      cin>>sex;
      if(sex==1 || sex==2)
      {
        abs->personArray[ret].m_Sex = sex;
        cout << "性别：" << sex << endl;
        break;
      }
      else
      {
        cout << "请重新输入！" << endl;
      }
    }
    cout << "请输入年龄：" << endl;
    while(true)
    {
      cin>>age;
      if(age >=1 && age<=100)
      {
        abs->personArray[ret].m_Age = age;
        cout << "年龄：" << endl;
        break;
      }
      else
      {
        cout << "请重新输入！年龄范围在1~99之间" << endl;
      }
    }

    cout << "请输入电话：" << endl;
    cin >> phone;
    abs->personArray[ret].m_Phone = phone;
    cout << "电话：" << phone << endl;

    cout << "请输入地址：" << endl;
    cin >> address;
    abs->personArray[ret].m_Address = address;
    cout << "地址：" << address << endl;

    cout << "修改成功！" << endl;
  }
  else
  {
    cout << "查无此人！" << endl;
  }

}
void showPeople(struct AddPersonBooks *abs)
{
  if(abs->m_Size == 0)
  {
    cout << "通讯录为空！" << endl;
    return;
  }
  cout << "通讯录菜单如下：" << endl;
  for(int i=0; i<abs->m_Size; i++)
  {
    cout << "姓名：" << abs->personArray[i].m_Name << "\t";
    cout << "性别：" << (abs->personArray[i].m_Sex==1 ? "男" : "女") << "\t";
    cout << "年龄：" << abs->personArray[i].m_Age << "\t";
    cout << "电话：" << abs->personArray[i].m_Phone << "\t";
    cout << "地址：" << abs->personArray[i].m_Address << "\t";
    cout << endl;
  }
}

void cleanPerson(struct AddPersonBooks *abs)
{
  abs->m_Size=0;
  cout << "清空完成" << endl;
}

void showMenu()
{
  cout << "************" << endl;
  cout << "1、添加联系人\n" ;
  cout << "2、显示联系人\n" ;
  cout << "3、查询联系人\n" ;
  cout << "4、删除联系人\n" ;
  cout << "5、修改联系人\n" ;
  cout << "6、清空联系人\n" ;
  cout << "0、退出\n" ;
  cout << "************" << endl;
}
