// Lab Exercise 6: SimpleCalculator.cpp
#include <iostream>
using namespace std;
#include "SimpleCalculator.h"
double SimpleCalculator::add(double a,double b)const
{
    return a+b;
}
/* Write definition for add member function */

// function subtract definition
double SimpleCalculator::subtract( double a, double b ) const
{
   return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply( double a, double b ) const
{
   return a * b;
} // end function multiply
double SimpleCalculator::divide(double a,double b)const
{
    a/b*0.01;
}
/* Write definition for divide member function */
