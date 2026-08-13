// 1. **Take the user's first name and last name and print the full name.**
// 2. **Take a name from the user and print a greeting message using that name.**

#include <iostream>
using namespace std;
int main()
{

  string fname;
  string lname;

  cout << "Enter your first name :";
  cin >> fname;
  cout << "Enter your last name :";
  cin >> lname;

  cout << "First name :" << fname << endl;
  cout << "Last name :" << lname;

  return 0;
}