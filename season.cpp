// write a program to take a number from user and print the season
#include <iostream>
using namespace std;

int main()
{
  int month;
  cout << "Enter month : ";
  cin >> month;

  if (month == 11 || month == 12 || month == 1 || month == 2)
  {
    cout << "winter season";
  }
  else if (month == 3 || month == 4 || month == 5 || month == 6)
  {
    cout << "Summer season";
  }
  else if (month == 7 || month == 8 || month == 9 || month == 10)
  {
    cout << "Rainy season";
  }
  else
  {
    cout << "Enter valid month";
  }
  return 0;
}
// using switch case
// #include <iostream>
// using namespace std;
// int main()
// {
//   int month;
//   cout << "Enter month : ";
//   cin >> month;

//   switch (month)
//   {
//   case 1:
//   case 2:
//   case 11:
//   case 12:
//     cout << "winter season";
//     break;
//   case 3:
//   case 4:
//   case 5:
//   case 6:
//     cout << "Summer season";
//     break;
//   case 7:
//   case 8:
//   case 9:
//   case 10:
//     cout << "Rainy season";
//     break;
//   default:
//     cout << "Month is invalid";
//   }
//   return 0;
// }
