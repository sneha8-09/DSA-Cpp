// 10.Take two numbers x and y from the user and calculate x^y.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x, y;
  cout << "Enter number :";
  cin >> x;
  cout << "Enter power :";
  cin >> y;

  cout << x << "^" << y << " = " << pow(x, y);

  return 0;
}