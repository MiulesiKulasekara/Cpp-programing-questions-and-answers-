#include "Medicine.h"
#include <iostream>
#include <string.h>
using namespace std;

int main() {

  //create objects
  Medicine m1 , m2 , m3 ;

  //set medicine details
  m1.setMedicineDetails( 1 , "Panadol" , "Headache", 1.0 );
  m2.setMedicineDetails( 2 , "Vitami C" , "Cold", 1.5 );
  m3.setMedicineDetails( 3 , "Vicks" , "Cough", 2.0 );
  
  //Set dose
  m1.setDose();
  m2.setDose();
  m3.setDose();
  
  //display outputcout 
  cout << endl ;
  m1.displayMedicineDetails();
  cout << endl ;
  m2.displayMedicineDetails();
  cout << endl ;
  m3.displayMedicineDetails();
  
  return 0;
}