#include <iostream>
using namespace std;

int main()
{
  char c;
  cout << "Enter any symbol : ";
  cin >> c;

  if (int(c) >= 48 && int(c) <= 57)
  {
    cout << "it is digit";
  }
  else if (int(c) >= 65 && int(c) <= 90)
  {
    cout << "value is upper alphabet";
  }
  else if (int(c) >= 97 && int(c) <= 122)
  {
    cout << "value is lower case";
  }
  else
  {
    cout << "it is symbol";
  }

  return 0;
}