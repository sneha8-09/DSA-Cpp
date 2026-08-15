// 12. Take Principal, Rate, and Time from the user and calculate Compound Interest and Total Amoun

#include <iostream>
#include <cmath>
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

  float amount = p * pow((1 + r / 100), t);
  cout << "Amount = " << amount << endl;
  cout << "Compound interest = " << amount - p;
  return 0;
}