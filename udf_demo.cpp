#include <iostream>
using namespace std;

void sum();
void sub();
void mul();
void div();

void sum()
{
  int x, y, sum;
  cout << "Enter 1st number : ";
  cin >> x;
  cout << "Enter 2nd number : ";
  cin >> y;
  sum = x + y;
  cout << "Addition is : " << sum << endl;
}
void sub()
{
  int x, y, sub;
  cout << "Enter 1st number : ";
  cin >> x;
  cout << "Enter 2nd number : ";
  cin >> y;
  sub = x - y;
  cout << "difference is :" << sub << endl;
}
void mul()
{
  int x, y, mul;
  cout << "Enter 1st number : ";
  cin >> x;
  cout << "Enter 2nd number : ";
  cin >> y;
  mul = x * y;
  cout << "multiplicatio is: " << mul << endl;
}
void div()
{
  int x, y, div;
  cout << "Enter 1st number : ";
  cin >> x;
  cout << "Enter 2nd number : ";
  cin >> y;
  div = x / y;
  cout << "division is : " << div << endl;
}
int main()
{
  sum();
  sub();
  mul();
  div();

  return 0;
}