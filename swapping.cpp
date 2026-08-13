// 7.**Take two numbers from the user and swap their values using a third variable.**

#include <iostream>
using namespace std;

int main()
{
  int n1, n2, n3;

  cout << "Enter 1st number :";
  cin >> n1;

  cout << "Enter 2nd number :";
  cin >> n2;

  cout << "Before swapping" << endl;
  cout << "n1 :" << n1 << endl;
  cout << "n2 :" << n2 << endl;

  n3 = n2;
  n2 = n1;
  n1 = n3;

  cout << "After swapping" << endl;
  cout << "n1 :" << n1 << endl;
  cout << "n2 :" << n2;
}