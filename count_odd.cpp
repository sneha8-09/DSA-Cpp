#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  for (int i = 23; i <= 97; i++)
  {
    if (i % 2 != 0)
    {
      count++;
    }
  }
  cout << count;
  return 0;
}