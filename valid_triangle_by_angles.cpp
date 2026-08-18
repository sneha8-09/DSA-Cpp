// Write a program to input angles of a triangle and check whether triangle is
// valid or not.

#include <iostream>
using namespace std;
int main()
{
  int a1, a2, a3;
  cout << "Enter 1st angle of triangle : ";
  cin >> a1;
  cout << "Enter 2nd angle of triangle : ";
  cin >> a2;
  cout << "Enter 3rd angle of triangle : ";
  cin >> a3;

  if (a1 + a2 + a3 == 180)
  {
    cout << "Triangle is valid by angle";
  }
  else
  {
    cout << "Trianle is not valid";
  }
  return 0;
}