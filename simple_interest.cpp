// 11. Simple Interest

// Take Principal, Rate, and Time from the user and calculate Simple Interest and Total Amount.**

#include <iostream>
using namespace std;

int main()
{
  int p = 15374;
  int r = 5;
  int t = 3;

  float si = (float)p * r * t / 100;
  cout << "simple interest : " << si << endl;

  return 0;
}
