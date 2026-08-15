// 15.Take the base and height of a triangle and calculate its area.

#include <iostream>
using namespace std;

int main()
{
  float base, height;
  cout << "Enter base of triangle : ";
  cin >> base;
  cout << "Enter height of triangle : ";
  cin >> height;

  cout << "Area of triangle : " << base * height / 2;
  return 0;
}