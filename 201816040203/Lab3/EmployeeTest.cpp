// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee a("Employee");
   Employee b("Employee");

   /* Output the first name, last name and salary for each Employee. */
a.display();
b.display();
cout<<endl;
   /* Give each Employee a 10% raise. */
cout<<"Increasing employee salaries by 10%"<<endl;
a.setMonthlySalary(a.getMonthlySalary()/10+a.getMonthlySalary());
b.setMonthlySalary(b.getMonthlySalary()/10+b.getMonthlySalary());
   /* Output the first name, last name and salary of each Employee again. */
   a.display();
   b.display();
   cout<<endl;
} // end main
