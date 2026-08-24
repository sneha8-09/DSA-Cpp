#include <iostream>
using namespace std;

int main()
{
  int n, i = 1;
  cout << "Enter number to print table : ";
  cin >> n;

  // for (i = 1; i <= 10; i++)
  // {
  //   cout << n << " * " << i << " = " << n * i << endl;
  // }

  while (i <= 10)
  {

    cout << n << " * " << i << " = " << n * i << endl;
    i++;
  }

  return 0;
}