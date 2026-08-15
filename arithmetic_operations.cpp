// 6. Take two numbers from the user and print their sum, difference, product, quotient, and remainder.

#include <iostream>
using namespace std;

int main()
{
  float n1;
  float n2;
  cout << "Enter 1st number : ";
  cin >> n1;
  cout << "Enter 2nd number : ";
  cin >> n2;

  float sum = n1 + n2;
  float sub = n1 - n2;
  float mul = n1 * n2;
  float div = n1 / n2;
  int mod = (int)n1 % (int)n2;

  cout << "Sum of " << n1 << " and " << n2 << " = " << sum << endl;
  cout << "Difference of " << n1 << " and " << n2 << " = " << sub << endl;
  cout << "Product of " << n1 << " and " << n2 << " = " << mul << endl;
  cout << "Quotient of " << n1 << " and " << n2 << " = " << div << endl;
  cout << "Remainder of " << n1 << " and " << n2 << " = " << mod << endl;

  return 0;
}