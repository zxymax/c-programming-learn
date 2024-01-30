#include <iostream>
#include <fstream>

using namespace std;

class CTemp
{
  string userName, Email, password;
  string searchName, searchEmail, searchPasword;
  fstream file;

  public:
  void login();
  void signUp();
  void forgotPassword();
} obj;


int main()
{
  char choice;
  cout << "\n1 - Login";
  cout << "\n2 - Sign Up";
  cout << "\n3 - Forgot Password";
  cout << "\n4 - Exit";
  cout << "\nEnter Your Choice :: ";
  cin >> choice;

  switch(choice)
  {
    case '1':
      cin.ignore();
      obj.login();
      break;
    case '2':
      cin.ignore();
      obj.signUp();
      break;
    case '3':
      cin.ignore();
      obj.forgotPassword();
      break;
    case '4':
      return 0;
      break;
    default:
      cout << "Invalid Selection...";
  }

  return 0;
}

void CTemp :: signUp()
{
  cout << "\nEnter Your User Name :: ";
  getline(cin, userName);
  cout << "\nEnter Your Email :: ";
  getline(cin, Email);
  cout << "\nEnter Your Password :: ";
  getline(cin, password);

  file.open("loginData.txt", ios::out | ios::app);
  file<<userName<<"*"<<Email<<"*"<<password<<endl;
  file.close();
}

void CTemp :: login()
{
  cout << "---------------LOGIN---------------" << endl;
  cout << "\nEnter Your User Name :: ";
  getline(cin, searchName);
  cout << "\nEnter Your Passowrd :: ";
  getline(cin, searchPasword);
  file.open("loginData.txt", ios::in);
  getline(file, userName, '*');
  getline(file, Email, '*');
  getline(file, password, '\n');
  while(!file.eof())
  {
    if(userName == searchName)
    {
      cout << "1. " << userName << endl;
      if(password == searchPasword)
      {
        cout << "2. " << password << endl;
        cout << "\nAccount Login Succefull...";
        cout << "\nUsername ::"<<userName << endl;
        cout << "\nEmail ::"<< Email << endl;
      }
      else
      {
        cout << "Password is Incorrect...!";
      }
    }
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');
  }
  file.close();
}

void CTemp :: forgotPassword()
{
  cout << "\nEnter Your UserName :: ";
  getline(cin, searchName);
  cout << "\nEnter Your Email :: ";
  getline(cin, searchEmail);

  file.open("loginData.txt", ios::in);
  getline(file, userName, '*');
  getline(file, Email, '*');
  getline(file, password, '\n');
  while(!file.eof())
  {
    if(userName == searchName)
    {
      if(Email == searchEmail)
      {
        cout << "\nAccount Found...!" << endl;
        cout << "\nYour Password :: " << password << endl;
      }
      else
      {
        cout << "Not Found...!\n";
      }
    }
    else
    {
      cout << "\nNot Found...!\n";
    }
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');
  }
}
