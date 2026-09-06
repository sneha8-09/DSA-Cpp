#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "How many fibonacci terms you want ? ";
  cin >> n;

  int n1 = 0;
  int n2 = 1;
  cout << n1;
  cout << " " << n2;

  int fib = 0;
  for (int i = 3; i <= n; i++)
  {
    fib = n1 + n2;
    n1 = n2;
    n2 = fib;
    cout << " " << fib;
  }

  return 0;
}