#include "Doctor.h"
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  
  //create objects
  
  Doctor d1 , d2 ;

  //Set doctor details
  
  d1.setDoctorDetails( 1 , "Dr.Sunil" , "Neurologist" ,"Royal" );
  d2.setDoctorDetails( 2 , "Dr.Yasantha" , "Oncologist" ,"McKarthy" );

  //Get hospitals
  d1.sethospital( );
  d2.sethospital( );

  //Display outpout
  cout << endl ;
  d1.displayDoctorDetails();
  cout << endl ;
  d2.displayDoctorDetails();
  
  return 0;
}