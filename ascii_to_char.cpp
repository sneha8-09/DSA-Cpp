//5. **Take an ASCII value from the user and print the corresponding character.**

#include <iostream>
using namespace std;

int main()
{

  int asc;
  cout << "Enter ASCII number :";
  cin >> asc;

  cout << "Character :" << char(asc);
  return 0;
}