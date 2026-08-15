// 13. Take the length and breadth of a rectangle and calculate its area and perimeter.

#include <iostream>
using namespace std;

int main()
{
  float length, breadth;

  cout << "Enter length of rectangle : ";
  cin >> length;
  cout << "Enter breadth of rectangle :";
  cin >> breadth;

  cout << "Area of rectangle : " << length * breadth << endl;
  cout << "perimeter of rectangle :" << 2 * (length + breadth);

  return 0;
}