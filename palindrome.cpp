// palindrome number
#include <iostream>
using namespace std;

int main()
{
  int n, num, sum = 0, digit, reverse = 0;
  cout << "Enter number : ";
  cin >> n;
  num = n;

  while (n != 0)
  {
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
  }
  if (num == reverse)
  {
    cout << num << " is palindrome number";
  }
  else
  {
    cout << num << " is not palindrome number";
  }
  return 0;
}