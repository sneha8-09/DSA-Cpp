#include <iostream>
using namespace std;

void swap(int &a, int &b);
void swap(int &a, int &b)
{
  int c;
  c = b;
  b = a;
  a = c;
  cout << "After swapping" << endl;
  cout << "a : " << a << endl;
  cout << "b : " << b << endl;
}

int main()
{
  int a, b;
  cout << "Enter 1st number : ";
  cin >> a;
  cout << "Enter 2nd number : ";
  cin >> b;
  cout << "before swapping" << endl;
  cout << "a : " << a << endl;
  cout << "b :" << b << endl;
  swap(a, b);
  return 0;
}