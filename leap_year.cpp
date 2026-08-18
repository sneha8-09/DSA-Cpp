// write a program to check whether a year is leap year or not

#include <iostream>
using namespace std;

int main()
{
  int year;

  cout << "Enter a year: ";
  cin >> year;

  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  {
    cout << "it is a leap year";
  }
  else
  {
    cout << "it is not leap year";
  }

  return 0;
}