// 19.Take a distance in centimeters and convert it into meters and kilometers.

#include <iostream>
using namespace std;

int main()
{
  float cm;
  cout << "Enter distance into centemeter : ";
  cin >> cm;

  cout << "Distance in Meter : " << cm / 100 << endl;
  cout << "Distnace in kilometer : " << cm / 100000;
  return 0;
}