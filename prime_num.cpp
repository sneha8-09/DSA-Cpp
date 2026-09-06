#include <iostream>
using namespace std;

bool prime(int n);
bool prime(int n)
{
  bool flag = 1;
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      flag = 0;
      break;
    }
  }
  return flag;
}
int main()
{
  int n;
  cout << "Enter number : ";
  cin >> n;

  if (prime(n))
  {
    cout << "it is prime number";
  }
  else
  {
    cout << "it is not prime number";
  }
  return 0;
}