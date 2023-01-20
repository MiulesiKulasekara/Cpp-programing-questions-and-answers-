#include "Child.h"
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  
  //Create objects
  Child c1 , c2 , c3 ;
  
  //Set child details
  
  c1.setChildDetails( 1 ,"Oliver","Toddler","Bryan" , "0772102887" );
  c2.setChildDetails( 2 ,"Cody" ,"Elder" ,"Joel" , "0723458790" );
  c3.setChildDetails( 3 ,"Kaden" ,"Young" ,"Jessica" , "072345614");

  //Set Concat number
  c1.setContactNo();
  c2.setContactNo();
  c3.setContactNo();

  //Display output
  cout << endl ;
  c1.displayChildDetails();
  cout << endl ;
  c2.displayChildDetails();
  cout << endl;
  c3.displayChildDetails();

  return 0 ;

}