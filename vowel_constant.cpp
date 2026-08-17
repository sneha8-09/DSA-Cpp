// write a program to input any aphabet and check whether it is vowel or constant

#include <iostream>
using namespace std;

int main()
{
  char c;

  cout << "Enter any alphabet : ";
  cin >> c;

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
  {
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
      cout << "It is vowel";
    }
    else
    {
      cout << "It is Constant";
    }
  }
  else
  {
    cout << "It is not alphabet";
  }
  return 0;
}