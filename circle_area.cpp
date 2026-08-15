// 14. Take the radius of a circle and calculate its diameter, circumference, and area.

#include <iostream>
using namespace std;
int main()
{
  float r;
  cout << "Enter radius of circle : ";
  cin >> r;

  cout << "Area of circle : " << 3.14 * r * r << endl;
  cout << "Diameter of circle : " << 2 * r << endl;
  cout << "Circumference of circle : " << 2 * 3.14 * r;

  return 0;
}