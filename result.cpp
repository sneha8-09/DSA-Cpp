// Write a program to input marks of five subjects Physics,
// Chemistry, Biology, Mathematics and Computer. Calculate percentage and
// grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include <iostream>
using namespace std;
int main()
{
  int m1, m2, m3, m4, m5;
  int per;

  cout << "Enter marks of physics : ";
  cin >> m1;
  cout << "Enter marks of chemistry : ";
  cin >> m2;
  cout << "Enter marks of biology : ";
  cin >> m3;
  cout << "Enter marks of maths : ";
  cin >> m4;
  cout << "Enter marks of computer : ";
  cin >> m5;

  if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
  {
    cout << "Fail";
  }
  else
  {
    per = (m1 + m2 + m3 + m4 + m5) / 5;
    cout << "percentage : " << per << endl;
    if (per >= 90)
    {
      cout << "Grade A";
    }
    else if (per >= 80)
    {
      cout << "Grade B";
    }
    else if (per >= 70)
    {
      cout << "Grade C";
    }
    else if (per >= 60)
    {
      cout << "Grade D";
    }
    else if (per >= 40)
    {
      cout << "Grade E";
    }
    else
    {
      cout << "Fail";
    }
  }
  return 0;
}