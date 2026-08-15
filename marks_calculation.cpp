// 21.Take marks of five subjects from the user and calculate the total marks, average marks, and percentage.

#include <iostream>
using namespace std;

int main()
{
  float m1, m2, m3, m4, m5;
  cout << "Enter marks of subject 1 : ";
  cin >> m1;
  cout << "Enter marks of subject 2 : ";
  cin >> m2;
  cout << "Enter marks of subject 3 : ";
  cin >> m3;
  cout << "Enter marks of subject 4 : ";
  cin >> m4;
  cout << "Enter marks of subject 5 : ";
  cin >> m5;

  float total = m1 + m2 + m3 + m4 + m5;
  cout << "Total marks : " << total << endl;
  cout << "Average of marks : " << total / 5 << endl;
  cout << "Percentage : " << (total / 500) * 100;
  return 0;
}