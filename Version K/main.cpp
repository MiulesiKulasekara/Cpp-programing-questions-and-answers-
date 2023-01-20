#include "Taxi.h"
#include <iostream>
#include<string.h>
using namespace std ;

int main() {

  //create objects
  Taxi t1 ,t2 , t3;
  
  //Set Taxi details
  t1.setTaxiDetails( 1234 , "Ben" , 150 , 10 );
  t2.setTaxiDetails( 4321 , "Charis" , 250 , 4 );
  t3.setTaxiDetails( 3434 , "Nick" , 175 , 2 );

  //calculate bill
  t1.calculateBill();
  t2.calculateBill();
  t3.calculateBill();

  //Display output
  cout << endl ;
  t1.displayTaxiDetails();
  cout << endl ;
  t2.displayTaxiDetails();
  cout << endl ;
  t3.displayTaxiDetails();
  
  return 0;
}