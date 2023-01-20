#include <iostream>
#include <string.h>
#include "Employee.h"
using namespace std ;

int main() {
  
  //create objects
  Employee e1 , e2 ;

  //set values for objects
  e1.setEmployeeDetails(1111,  "Nimal");
  e1.setOTRate(100);
  e1.setOTHours(22);

  e2.setEmployeeDetails(2222,  "Sunil");
  e2.setOTRate(200);
  e2.setOTHours(18);

  //display output
  e1.displayEmployeeDetails();
  cout << endl ;
  e2.displayEmployeeDetails();
  
  return 0 ;
}