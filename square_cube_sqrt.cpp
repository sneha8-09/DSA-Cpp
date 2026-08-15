// 9. Take a number from the user and print its square, cube, and square root.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float n;
  cout << "Enter number : " << endl;
  cin >> n;

  cout << "Square of " << n << " = " << n * n << endl;
  cout << "Cube of " << n << " = " << n * n * n << endl;
  cout << "Square root of " << n << " = " << sqrt(n);
  return 0;
}
