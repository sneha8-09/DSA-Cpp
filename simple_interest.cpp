// 11. Simple Interest

// Take Principal, Rate, and Time from the user and calculate Simple Interest and Total Amount.**

#include <iostream>
using namespace std;

int main()
{
  float p;
  float r;
  float t;

  cout << "Enter principle amount :";
  cin >> p;
  cout << "Enter rate of interest :";
  cin >> r;
  cout << "Enter time :";
  cin >> t;

  float si = p * r * t / 100;
  cout << "simple interest : " << si << endl;
  cout << "Total amount : " << p + si;
  return 0;
}
