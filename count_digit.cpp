// count the digit
#include <iostream>
using namespace std;
;
int main()
{
  int n;
  cout << "Enter any number : ";
  cin >> n;
  int count = 0;
  while (n != 0)
  {
    n = n / 10;
    count++;

    //  cout << n;
  }
  cout << "Digit in  number : " << count;
  return 0;
}