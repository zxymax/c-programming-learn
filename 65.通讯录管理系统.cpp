#include <iostream>

using namespace std;

#define MAX 1000

// 设计联系人结构体
struct Person
{
  string m_name;
  int m_sex;
  int m_age;
  string m_phone;
  string m_address;
};

// 设计通讯录结构体
struct Addressbooks
{
  // 通讯录中保存联系人的数组
  struct Person personArray[MAX];

  // 通讯录中当前记录联系人个数
  int m_size;
};

// 添加联系人
void addPerson(struct Addressbooks *abs)
{
  // 判断通讯录是否已满 如果满了就不再添加
  if (abs->m_size == MAX)
  {
    cout << "通讯录已满，无法再添加！" << endl;
    return;
  }
  else
  {
    string name;
    cout << "请输入姓名：" << endl;
    cin >> name;
    abs->personArray[abs->m_size].m_name = name;

    int sex = 0;
    
    cout << "请输入性别：" << endl;
    cout << "1 --- 男" << endl;
    cout << "2 --- 女" << endl;
    while(true)
    {
      cin >> sex;
      if(sex==1 || sex==2)
      {
        abs->personArray[abs->m_size].m_sex = sex;
        break;
      }
      else
      {
        cout << "请重新输入！！" << endl;
      }
    }

    cout << "请输入年龄：" << endl;
    int age = 0;
    cin >> age;
    abs->personArray[abs->m_size].m_age = age;

    string phone;
    cout << "请输入电话：" << endl;
    cin >> phone;
    abs->personArray[abs->m_size].m_phone = phone;

    string address;
    cout << "请输入地址：" << endl;
    cin >> address;
    abs->personArray[abs->m_size].m_address = address;

    abs->m_size++;

    cout << "添加成功:)" << endl;
  }
}

// 显示所有联系人
void showPerson(struct Addressbooks *abs)
{
  cout << abs->m_size << endl;
  if(abs->m_size == 0)
  {
    cout << "当前记录为空!" << endl;
  }
  else
  {
    for(int i=0; i<abs->m_size; i++)
    {
      cout << "姓名：" << abs->personArray[i].m_name << "\t";
      cout << "性别：" << (abs->personArray[i].m_sex == 1 ? "男" : "女") << "\t";
      cout << "年龄：" << abs->personArray[i].m_age << "\t";
      cout << "电话：" << abs->personArray[i].m_phone << "\t";
      cout << "地址：" << abs->personArray[i].m_address << endl;
    }
  }
}

// 检查联系人是否存在 如果存在 返回联系人所占数组中具体位置 不存在返回-1
int isExist(struct Addressbooks *abs, string name)
{
  for(int i=0; i<abs->m_size; i++)
  {
    if(abs->personArray[i].m_name == name)
    {
      return i;
    }
  }
  return -1;
}

// 删除指定联系人
void deletePerson(struct Addressbooks *abs)
{
  cout << "请输入要删除的联系人：" << endl;
  string name;
  cin >> name;

  int ret = isExist(abs, name);
  if(ret != -1)
  {
    for(int i=0; i<abs->m_size; i++)
    {
      abs->personArray[i] = abs->personArray[i+1];
    }
    abs->m_size--;
    cout << "删除成功:)" << endl;
  }
  else
  {
    cout << "查无此人！" << endl;
  }
}

// 查找联系人
void findPerson(struct Addressbooks *abs)
{
  cout << "请输入要查找的联系人：" << endl;
  string name;
  cin >> name;

  int ret = isExist(abs, name);
  if(ret != -1)
  {
      cout << "姓名：" << abs->personArray[ret].m_name << "\t";
      cout << "性别：" << (abs->personArray[ret].m_sex == 1 ? "男" : "女") << "\t";
      cout << "年龄：" << abs->personArray[ret].m_age << "\t";
      cout << "电话：" << abs->personArray[ret].m_phone << "\t";
      cout << "地址：" << abs->personArray[ret].m_address << endl;
  }
  else
  {
    cout << "未找到！" << endl;
  }
}

// 修改联系人
void modifyPerson(struct Addressbooks *abs)
{
  cout << "请输入要修改的联系人" << endl;
  string name;
  cin >> name;
  int ret = isExist(abs, name);

  if(ret != -1)
  {
    cin >> name;
    abs->personArray[ret].m_name = name;

    int sex = 0;
    
    cout << "请输入性别：" << endl;
    cout << "1 --- 男" << endl;
    cout << "2 --- 女" << endl;
    while(true)
    {
      cin >> sex;
      if(sex==1 || sex==2)
      {
        abs->personArray[ret].m_sex = sex;
        break;
      }
      else
      {
        cout << "请重新输入！！" << endl;
      }
    }

    cout << "请输入年龄：" << endl;
    int age = 0;
    cin >> age;
    abs->personArray[ret].m_age = age;

    string phone;
    cout << "请输入电话：" << endl;
    cin >> phone;
    abs->personArray[ret].m_phone = phone;

    string address;
    cout << "请输入地址：" << endl;
    cin >> address;
    abs->personArray[ret].m_address = address;

    cout << "找到了!" << endl;
    cout << "修改成功:)" << endl;

  }
  else
  {
    cout << "查无此人!" << endl;
  }
}

void cleanPerson(struct Addressbooks *abs)
{
  abs->m_size = 0;
  cout << "通讯录已清空" << endl;
}

// 封装函数显示界面
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
  // 创建通讯录结构体变量
  struct Addressbooks abs;

  // 初始化通讯录中当前人员个数
  abs.m_size = 0;

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
