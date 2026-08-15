// 20.Take the total number of days from the user and convert them into years, weeks, and remaining days.

#include <iostream>
using namespace std;

int main()
{
  int days;
  cout << "Enter days : ";
  cin >> days;

  int remain_day = days % 365;
  cout << "Years : " << days / 365 << endl;
  cout << "Remaining days : " << remain_day << endl;
  cout << "Weeks : " << remain_day / 7 << endl;
  cout << "Days : " << remain_day % 7;
}