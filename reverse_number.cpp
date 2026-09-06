// reverse number
#include <iostream>
using namespace std;

int main()
{
  int n, digit, reverse = 0;
  cout << "Enter number : ";
  cin >> n;

  while (n != 0)
  {
    digit = n % 10;
    // reverse = reverse * 10 + digit;
    // cout << reverse << endl;
    if (reverse >= 2147483647)
    {
      // cout << reverse << endl;
      reverse = 0;
      break;
    }
    else
    {
      cout << reverse << endl;
      reverse = reverse * 10 + digit;
      n = n / 10;
    }
  }
  cout << "Reverse number : " << reverse;
  return 0;
}