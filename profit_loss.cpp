// Write a program to calculate profit or loss
#include <iostream>
using namespace std;

int main()
{
  int sell, buy;
  cout << "Enter buying price : ";
  cin >> buy;
  cout << "Enter selling price : ";
  cin >> sell;

  int profit = sell - buy;
  int loss = buy - sell;
  if (profit > 0)
  {
    cout << "profit : " << profit << endl;
    cout << "loss : 0";
  }
  else
  {
    cout << "profit : 0" << endl;
    cout << "loss : " << loss;
  }
}