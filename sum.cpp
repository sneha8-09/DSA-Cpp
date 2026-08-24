#include <iostream>
using namespace std;

int main()
{
  int n, i = 1, sum = 0;
  cout << "Enter number : ";
  cin >> n;
  for (i = 1; i <= 10; i++)
  {
    sum = sum + (n * i);
    cout << n << " * " << i << " = " << n * i << endl;
  }
  cout << "Factorial of " << n << " is " << sum;

  return 0;
}