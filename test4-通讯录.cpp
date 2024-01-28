#include <iostream>

using namespace std;

#define MAX 1000

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
  // 判断通讯录是否已满 如果满了就不再添加
  if(abs->m_Size == MAX)
  {
    cout << "通讯录已满，无法再添加！" << endl;
    return;
  }
  else
  {
    string name;
    cout << "请输入姓名：\n";
    cin >> name;
    abs->personArray[abs->m_Size].m_Name = name;
    cout << name << endl;

    int age;
    cout << "请输入年龄：\n";
    cin >> age;
    abs->personArray[abs->m_Size].m_Age = age;
    cout << age << endl;

    int sex;
    cout << "请输入性别：\n";
    cout << "1 --- 男" << endl;
    cout << "2 --- 女" << endl;
    cin >> sex;

    while(true)
    {
      if(sex==1 || sex==2)
      {
        abs->personArray[abs->m_Size].m_Sex = sex;
        cout << (sex==1 ? "男" : "女") << endl;
        break;
      }
      else
      {
        cout << "输入有误！" << endl;
      }
    }

    string phone;
    cout << "请输入电话：\n";
    cin >> phone;
    abs->personArray[abs->m_Size].m_Phone = phone;
    cout << phone << endl;

    string address;
    cout << "请输入地址：\n";
    cin >> address;
    abs->personArray[abs->m_Size].m_Address = address;
    cout << address << endl;

    abs->m_Size++;

    cout << "添加成功！" << endl;


  }
}
void showPerson(struct AddressBooks *abs)
{
  cout << abs->m_Size << endl;
  if(abs->m_Size == 0)
  {
    cout << "当前记录为空！" << endl;
  }
  else
  {
    for(int i=0; i<abs->m_Size; i++)
    {
      cout << "姓名：" << abs->personArray[i].m_Name << "\t";
      cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
      cout << "年龄：" << abs->personArray[i].m_Age << "\t";
      cout << "电话：" << abs->personArray[i].m_Phone << "\t";
      cout << "地址：" << abs->personArray[i].m_Address << endl;
    }
  }
}

// 检查联系人是否存在 如果存在 返回联系人所占数组中具体位置 不存在返回-1
int isExist(struct AddressBooks *abs, string name)
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
void deletePerson(struct AddressBooks *abs)
{
  cout << "请输入要删除的联系人：" << endl;
  string name;
  cin >> name;

  int ret = isExist(abs, name);

  if(ret!=-1)
  {
    for(int i=0; i<abs->m_Size; i++)
    {
      abs->personArray[i] = abs->personArray[i+1];
    }
    abs->m_Size--;
    cout << "删除成功！" << endl;
  }
  else
  {
    cout << "查无此人！" << endl;
  }
}

void findPerson(struct AddressBooks *abs)
{
  cout << "请输入要查询的联系人：" << endl;
  string name;
  cin >> name;
  int ret = isExist(abs, name);

  if(ret!=-1)
  {
      cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
      cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
      cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
      cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
      cout << "地址：" << abs->personArray[ret].m_Address << endl;
  }
  else
  {
    cout << "未找到！" << endl;
  }

}

void modifyPerson(struct AddressBooks *abs)
{
  cout << "请输入要修改的联系人：" << endl;
  string name;
  cin >> name;
  int ret = isExist(abs, name);

  if(ret!=-1)
  {
    abs->personArray[ret].m_Name = name;
    cout << name << endl;

    cout << "请输入要修改的年龄：" << endl;
    int age;
    cin >> age;
    abs->personArray[ret].m_Age = age;
    cout << age << endl;

    cout << "请输入要修改的性别：" << endl;
    int sex;
    while(true)
    {
      if(sex==1 || sex==2)
      {
        cin >> sex;
        abs->personArray[ret].m_Sex = sex;
        cout << (sex==1 ? "男" : "女") << endl;
        break;
      }
      else
      {
        cout << "输入有误！" << endl;
      }
    }


    cout << "请输入要修改的电话：" << endl;
    int phone;
    cin >> phone;
    abs->personArray[ret].m_Phone = phone;
    cout << age << endl;

    cout << "请输入要修改的地址：" << endl;
    int address;
    cin >> address;
    abs->personArray[ret].m_Address = address;
    cout << age << endl;

    cout << "修改成功！" << endl;
  }
  else
  {
    cout << "查无此人！" << endl;
  }
}

void cleanPerson(struct AddressBooks *abs)
{
  abs->m_Size = 0; 
  cout << "通讯录已清空" << endl;
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
        showPerson(&abs);
        break;
      case 3:
        deletePerson(&abs);
        break;
      case 4:
        findPerson(&abs);
        break;
      case 5:
        modifyPerson(&abs);
        break;
      case 6:
        cleanPerson(&abs);
        break;
      case 0:
        cout << "欢迎下次使用:)" << endl;
        return 0;
        break;
      default:
        break;
    }
  }
  return 0;
}
