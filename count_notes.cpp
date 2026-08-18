// write a program to count the total numbers of notes in given amount

#include <iostream>
using namespace std;

int main()
{
  int amount;
  cout << "Enter amount : ";
  cin >> amount;

  if (amount >= 500)
  {
    int notes = amount / 500;
    amount = amount % 500;
    cout << "total 500 notes are : " << notes << endl;
  }
  if (amount >= 200)
  {
    int notes = amount / 200;
    amount = amount % 200;
    cout << "total 200 notes are : " << notes << endl;
  }
  if (amount >= 100)
  {
    int notes = amount / 100;
    amount = amount % 100;
    cout << "total 100 notes are : " << notes << endl;
  }
  if (amount >= 50)
  {
    int notes = amount / 50;
    amount = amount % 50;
    cout << "total 50 notes are : " << notes << endl;
  }
  if (amount >= 20)
  {
    int notes = amount / 20;
    amount = amount % 20;
    cout << "total 20 notes are : " << notes << endl;
  }
  if (amount >= 10)
  {
    int notes = amount / 10;
    amount = amount % 10;
    cout << "total 10 notes are : " << notes << endl;
  }
  if (amount >= 5)
  {
    int notes = amount / 5;
    amount = amount % 5;
    cout << "total 5 notes are : " << notes << endl;
  }
  if (amount >= 2)
  {
    int notes = amount / 2;
    amount = amount % 2;
    cout << "total 2 notes are : " << notes << endl;
  }
  if (amount >= 1)
  {
    int notes = amount;
    cout << "total 1 notes are : " << notes << endl;
  }
  return 0;
}