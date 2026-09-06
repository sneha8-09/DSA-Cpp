#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n);
bool armstrong(int n)
{
  int sum = 0, digit, count = 0;
  int num = n;

  while (n != 0)
  {
    n = n / 10;
    count++;
  }
  n = num;
  while (n != 0)
  {
    digit = n % 10;
    sum = sum + pow(digit, count);
    n = n / 10;
  }
  return sum == num;
}
int main()
{
  int n;
  cout << "Enter number : ";
  cin >> n;

  if (armstrong(n))
  {
    cout << "it is armstronng number";
  }
  else
  {
    cout << "it is not armstrong number";
  }
  return 0;
}