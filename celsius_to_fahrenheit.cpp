// 17. Take a temperature in Celsius from the user and convert it into Fahrenheit.

#include <iostream>
using namespace std;

int main()
{
  float temp;
  cout << "Enter temprature in celsius : ";
  cin >> temp;

  cout << "Celcius to fehrenhit : " << (temp * 9 / 5) + 32;
  return 0;
}