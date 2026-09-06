#include <iostream>
using namespace std;

int main()
{
  int n = 3;
  int square = 0;
  int digit;
  while (n != 0)
  {
    digit = n % 10;
    square = square + (digit * digit);
    n = n / 10;
    if (n == 0)
    {
      if (square == 4)
      {
        break;
      }
      else if (square == 1)
      {
        break;
      }
      else
      {
        n = square;
        square = 0;
      }
    }
  }
  if (square == 1)
  {
    cout << "happy";
  }
  else
  {
    cout << "not happy";
  }
  return 0;
}
