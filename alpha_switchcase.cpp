// using switch case find alphabet is vowel or constant
#include <iostream>
using namespace std;
int main()
{
  char c;
  cout << "Enter alphabet : ";
  cin >> c;

  switch (c)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    cout << "It is vowel ";
    break;

  default:
    cout << "it is consonant";
    break;
  }
  return 0;
}