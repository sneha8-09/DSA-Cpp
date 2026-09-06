#include <iostream>
using namespace std;

bool isStrong(int n);

bool isStrong(int n)
{
  int sum = 0, digit;
  int num = n;
  while (n != 0)
  {
    digit = n % 10;
    if (digit == 0)
    {
      digit = 1;
    }
    else
    {
      for (int i = digit - 1; i >= 1; i--)
      {
        digit = digit * i;
      }
    }
    sum = sum + digit;
    n = n / 10;
  }
  return sum == num;
}
int main()
{
  int n;
  cout << "Enter number : ";
  cin >> n;

  if (isStrong(n))
  {
    cout << "It is strong number";
  }
  else
  {
    cout << "It is not strong number";
  }
  return 0;
}