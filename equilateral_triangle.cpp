// 16.Take the side of an equilateral triangle and calculate its area

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float side;
  cout << "Enter side of equilateral triangle : ";
  cin >> side;

  cout << "Area of equilateral triangle : " << (sqrt(3) / 4) * pow(side, 2);
  return 0;
}