// Write a program to input sides of a triangle and check whether triangle is
// valid or not.
#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter length of side 1 : ";
  cin >> a;
  cout << "Enter length of side 2 : ";
  cin >> b;
  cout << "Enter length of side 3 : ";
  cin >> c;

  if (a + b > c && a + c > b && b + c > a)
  {
    cout << "Triangle is valid";
  }
  else
  {
    cout << "Triangle is not valid";
  }
  return 0;
}