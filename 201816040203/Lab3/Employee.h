// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee (string,string,int);
   /* Declare a set method for the employee's first name */
   void setFirstName(string);
   /* Declare a get method for the employee's first name */
   string getFirstName();
   /* Declare a set method for the employee's last name */
   void setLastName(string);
   /* Declare a get method for the employee's last name */
   string getLastName();
   /* Declare a set method for the employee's monthly salary */
   void setMonthlySalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getMonthlySalary();
   display();
private:
    string FirstName;
   /* Declare a string data member for the employee's first name */
   string LastName;
   /* Declare a string data member for the employee's last name */
   int MonthlySalary;
   /* Declare an int data member for the employee's monthly salary */
}; // end class Employee
