// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
Employee::Employee(string firstname,string lastname,int salary)
    {
        setFirstName(firstname);setLastName(lastname);setMonthlySalary(salary);

    }
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
void Employee::setFirstName(string firstname)
{
    FirstName=firstname;
}
/* Define a set function for the first name data member. */
string Employee::getFirstName()
{
    return FirstName;
}

/* Define a get function for the first name data member. */
void Employee::setLastName(string lastname)
{
    LastName=lastname;
}
/* Define a set function for the last name data member. */
string Employee::getLastName()
{
    return LastName;
}
/* Define a get function for the last name data member. */
void Employee::setMonthlySalary(int salary)
{
    if(salary>0)
    {
        MonthlySalary=salary;
    }
    else
        MonthlySalary=0;

}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
int Employee::getMonthlySalary()
{
    return MonthlySalary;
}
/* Define a get function for the monthly salary data member. */
int Employee::display()
{
    cout<<FirstName<<LastName<<"Yearly Salary"<<MonthlySalary<<endl;
}
