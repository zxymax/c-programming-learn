#include <iostream>

const int MAX = 1000;

struct Person
{
  std::string m_Name;
  int         m_Age;
  int         m_Sex;
  std::string m_Phone;
  std::string m_Address;
};

struct AddressBooks
{
  struct Person personArray[MAX];
  int m_Size;
};

int isExist(struct AddressBooks *pAbs, std::string name)
{
  for(int i=0; i<pAbs->m_Size; i++)
  {
    if(pAbs->personArray[i].m_Name == name)
    {
      return i;
    }
  }
  return -1;
}

void addPerson(struct AddressBooks *pAbs)
{
  if(pAbs->m_Size == MAX)
  {
    std::cout << "通讯录已满，无法再添加！" << std::endl;
    return;
  }
  else
  {
    std::string name;
    std::cout << "请输入姓名：" << std::endl;
    std::cin >> name;
    pAbs->personArray[pAbs->m_Size].m_Name = name;
    std::cout << name << std::endl;

    while(true)
    {
      int age;
      std::cout << "请输入年龄：" << std::endl;
      std::cin >> age;
      if(age>0 && age<=100)
      {
        std::cout << "正确" << std::endl;
        std::cout << "年龄---------------" << age << std::endl; 
        pAbs->personArray[pAbs->m_Size].m_Age = age;
        break;
      }
      else
      {
        std::cout << "输入有误！" << std::endl;
      }
    }

    while(true)
    {
      int sex;
      std::cout << "请输入性别：" << std::endl;
      std::cout << "1 --- 男" << std::endl;
      std::cout << "2 --- 女" << std::endl;
      std::cin >> sex;
      if(sex==1 || sex==2)
      {
        pAbs->personArray[pAbs->m_Size].m_Sex = sex;
        std::cout << (sex==1 ? "男" : "女") << std::endl;
        break;
      }
      else
      {
        std::cout << "输入有误！" << std::endl;
      }
    }


    std::string phone;
    std::cout << "请输入电话：" << std::endl;
    std::cin >> phone;
    pAbs->personArray[pAbs->m_Size].m_Phone = phone;
    std::cout << phone << std::endl;

    std::string address;
    std::cout << "请输入地址：" << std::endl;
    std::cin >> address;
    pAbs->personArray[pAbs->m_Size].m_Address = address;
    std::cout << address << std::endl;

    pAbs->m_Size++;

    std::cout << "添加成功！" << std::endl;
  }
}

void deletePerson(struct AddressBooks *pAbs)
{
  std::string name;
  std::cout << "请输入要删除的联系人：" << std::endl;
  std::cin >> name;
  int ret = isExist(pAbs, name);
  if(ret!=-1)
  {
    for(int i=0; i<pAbs->m_Size; i++)
    {
      pAbs->personArray[i] = pAbs->personArray[i+1];
    }
    pAbs->m_Size--;
    std::cout << "删除成功！" << std::endl;
  }
  else
  {
    std::cout << "未找到！" << std::endl;
  }
}

void findPerson(struct AddressBooks *pAbs)
{
  std::string name;
  std::cout << "请输入要查询的联系人：" << std::endl;
  std::cin >> name;
  int ret = isExist(pAbs, name);
  if(ret!=-1)
  {
    std::cout << "姓名：" << pAbs->personArray[ret].m_Name << "\t";
    std::cout << "性别：" << (pAbs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
    std::cout << "年龄：" << pAbs->personArray[ret].m_Age << "\t";
    std::cout << "电话：" << pAbs->personArray[ret].m_Phone << "\t";
    std::cout << "地址：" << pAbs->personArray[ret].m_Address << std::endl; 
  }
  else
  {
    std::cout << "未找到！" << std::endl;
  }
}

void modifyPerson(struct AddressBooks *pAbs)
{
  std::cout << "请输入要修改的联系人：" << std::endl;
  std::string name;
  std::cin >> name;
  int ret = isExist(pAbs, name);
  if(ret!=-1)
  {
    pAbs->personArray[ret].m_Name = name;
    std::cout << name << std::endl;

    while(true)
    {
      int age;
      std::cout << "请输入年龄：" << std::endl;
      std::cin >> age;
      if(age>0 && age<=100)
      {
        std::cout << "正确" << std::endl;
        std::cout << "年龄---------------" << age << std::endl; 
        pAbs->personArray[ret].m_Age = age;
        break;
      }
      else
      {
        std::cout << "输入有误！" << std::endl;
      }
    }

    while(true)
    {
      int sex;
      std::cout << "请输入性别：" << std::endl;
      std::cout << "1 --- 男" << std::endl;
      std::cout << "2 --- 女" << std::endl;
      std::cin >> sex;
      if(sex==1 || sex==2)
      {
        pAbs->personArray[ret].m_Sex = sex;
        std::cout << (sex==1 ? "男" : "女") << std::endl;
        break;
      }
      else
      {
        std::cout << "输入有误！" << std::endl;
      }
    }

    std::string phone;
    std::cout << "请输入电话：" << std::endl;
    std::cin >> phone;
    pAbs->personArray[ret].m_Phone = phone;
    std::cout << phone << std::endl;

    std::string address;
    std::cout << "请输入地址：" << std::endl;
    std::cin >> address;
    pAbs->personArray[ret].m_Address = address;
    std::cout << address << std::endl;

    std::cout << "修改成功！" << std::endl;
  }
  else
  {
    std::cout << "未找到！" << std::endl;
  }

}

void showPerson(struct AddressBooks *pAbs)
{
  if(pAbs->m_Size == 0)
  {
    std::cout << "当前记录为空！" << std::endl;
    return;
  }
  for(int i=0; i<pAbs->m_Size; i++)
  {
    std::cout << "姓名：" << pAbs->personArray[i].m_Name << "\t";
    std::cout << "性别：" << (pAbs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
    std::cout << "年龄：" << pAbs->personArray[i].m_Age << "\t";
    std::cout << "电话：" << pAbs->personArray[i].m_Phone << "\t";
    std::cout << "地址：" << pAbs->personArray[i].m_Address << std::endl; 
  }
}

void cleanPerson(struct AddressBooks *pAbs)
{
  pAbs->m_Size = 0;
  std::cout << "通讯录已清空！" << std::endl;
}

void showMenu()
{
  std::cout << "*************************" << std::endl;
  std::cout << "***** 1、添加联系人 *****" << std::endl;
  std::cout << "***** 2、显示联系人 *****" << std::endl;
  std::cout << "***** 3、删除联系人 *****" << std::endl;
  std::cout << "***** 4、查找联系人 *****" << std::endl;
  std::cout << "***** 5、修改联系人 *****" << std::endl;
  std::cout << "***** 6、清空联系人 *****" << std::endl;
  std::cout << "***** 0、退出通讯录 *****" << std::endl;
  std::cout << "*************************" << std::endl;
}

int main(void)
{
  struct AddressBooks pAbs;

  pAbs.m_Size = 0;
  int select  = 0;

  while(true)
  {
    showMenu();
    std::cin >> select;

    switch(select)
    {
      case 1:
        addPerson(&pAbs); break;
      case 2:
        showPerson(&pAbs); break;
      case 3:
        deletePerson(&pAbs); break;
      case 4:
        findPerson(&pAbs); break;
      case 5:
        modifyPerson(&pAbs); break;
      case 6:
        cleanPerson(&pAbs); break;
      case 0:
        std::cout << "欢迎下次使用！" << std::endl;
        return 0;
        break;
      default: break;
    }
  }

  return 0;
}
