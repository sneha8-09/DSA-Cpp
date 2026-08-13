// 3. **Take a word from the user and print its length.**

#include <iostream>
using namespace std;

int main()
{

  string name;
  cout << "Enter your name :";
  cin >> name;

  int len = name.length();
  cout << "length of name : " << len;
  return 0;
}