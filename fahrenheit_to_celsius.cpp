// 18.Take a temperature in Fahrenheit from the user and convert it into Celsius.

#include <iostream>
using namespace std;

int main()
{
  float temp;
  cout << "Enter temprature in celsius : ";
  cin >> temp;

  cout << "Fehrenhit to  celcius : " << (temp - 32) * 5 / 9;
  return 0;
}