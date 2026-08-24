//

// 26.Write a program to input basic salary of an employee and calculate its Gross salary according to following:
// 	Basic Salary <= 10000 : HRA = 20%, DA = 80%
// 	Basic Salary <= 20000 : HRA = 25%, DA = 90%
// 	Basic Salary > 20000 : HRA = 30%, DA = 95%

// #include <iostream>
// using namespace std;
// int main()
// {
//   int salary;
//   cout << "Enter basic salary : ";
//   cin >> salary;

//   if (salary <= 10000)
//   {
//     float hra = salary * 0.20;
//     float da = salary * 0.80;
//     float total = salary + hra + da;
//     cout << "Gross salary : " << total;
//   }
//   else if (salary <= 20000)
//   {
//     float hra = salary * 0.25;
//     float da = salary * 0.90;
//     cout << "Gross salary : " << hra + da + salary;
//   }
//   else
//   {
//     float hra = salary * 0.30;
//     float da = salary * 0.95;
//     cout << "Gross salary : " << hra + da + salary;
//   }
//   return 0;
// }

// 26.Write a program to input basic salary of an employee and calculate its Gross salary according to following:
// 	Basic Salary <= 10000 : HRA = 20%, DA = 80%
// 	Basic Salary <= 20000 : HRA = 25%, DA = 90%
// 	Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <iostream>
using namespace std;
float gross_sal, hra, da;
int main()
{
  int salary;
  cout << "Enter basic salary : ";
  cin >> salary;
  float hra, da;

  if (salary <= 10000)
  {
    hra = salary * 0.20;
    da = salary * 0.80;
  }
  else if (salary <= 20000)
  {
    float hra = salary * 0.25;
    float da = salary * 0.90;
  }
  else
  {
    float hra = salary * 0.30;
    float da = salary * 0.95;
  }
  gross_sal = hra + da + salary;
  cout << "Gross salary : " << gross_sal;
  return 0;
}