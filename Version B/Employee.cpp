#include <iostream>
#include <string.h>
#include "Employee.h"
using namespace std ;

//methods implementation

 void Employee::setEmployeeDetails(int pID , const char pname[] )
  {
    employeeID = pID ;
    strcpy ( employeename , pname );

  }
   void Employee::displayEmployeeDetails()
   {
      cout << "Employee ID    =  " << employeeID << endl ;
      cout << "Employee Name  =  " << employeename << endl ;
      cout << "OT Payment     =  " << calculateOTPayment() << endl ;   
   }
  void Employee::setOTHours( double pOT )
  {
      OTHours = pOT ;
  }
  void Employee::setOTRate( double pRate )
  {
     OTRate = pRate ;
  }
  double Employee::calculateOTPayment( ) 
  {
      return OTRate * OTHours ;
      
  }