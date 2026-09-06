#include <iostream>
using namespace std;
bool perfect(int n);
bool perfect(int n)
{
  int sum = 0;
  int num = n;

  for (int i = 1; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      sum = sum + i;
    }
  }
  return sum == num;
}
int main()
{
  int n;
  cout << "Enter number : ";
  cin >> n;

  if (perfect(n))
  {
    cout << "it is perfect  number";
  }
  else
  {
    cout << "it is not perfect number";
  }
  return 0;
}