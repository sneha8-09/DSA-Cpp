// reverse number
#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0, digit, reverse = 0;
  cout << "Enter number : ";
  cin >> n;

  while (n != 0)
  {
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
  }
  cout << "Reverse number : " << reverse;
  return 0;
}