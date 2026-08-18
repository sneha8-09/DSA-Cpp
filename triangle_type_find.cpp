// Write a program to check whether the triangle is equilateral, isosceles
// or scalene triangle.
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

  if (a + b > c && a + c > b && b + c < a)
  {
    if (a == b && b == c)
    {
      cout << "It is quilateral triangle";
    }
    else if (a == b || a == c || b == c)
    {
      cout << "It is isosceles triangle";
    }
    else
    {
      cout << "It is scalene triangle";
    }
  }
  else
  {
    cout << "Triangle is not valid";
  }

  return 0;
}