#include <iostream>
using namespace std;

int main()
{
  int a = 1998;

  a = a % 100;
  cout << "last 2 digits :" << a;

  return 0;
}