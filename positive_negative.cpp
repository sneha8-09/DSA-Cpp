#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number:" << endl;
  cin >> n;

  if (n > 0)
  {
    cout << "positive number";
  }
  else if (n == 0)
  {
    cout << "number is 0";
  }
  else
  {
    cout << "Negative number";
  }
  return 0;
}