#include "Guest.h"
#include <iostream>
#include <string.h>
using namespace std ;

int main() {
   
   Guest g1 , g2 , g3 ;
  
  //Set guest details
  g1.setGuestDetails( 1212 , "Jared" , 4500 , 4 );
  g2.setGuestDetails( 1122 , "Ben" , 3000 , 3 );
  g3.setGuestDetails( 1234 , "Ruby" , 5750 , 2 );
  
  //Calculate bill
  g1.calculateGuestBill();
  g2.calculateGuestBill();
  g3.calculateGuestBill();

  //Display output
  g1.displayGuestDetaild();
  cout << endl ;
  g2.displayGuestDetaild();
  cout << endl ;
  g3.displayGuestDetaild();
  
  return 0;
}