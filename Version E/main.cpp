#include "Vehicle.h"
#include <iostream>
#include <string.h>
using namespace std ;

int main() {
  
  //Create objects 
  Vehicle v1 , v2 , v3 ;
  
  //Set vehicle details
  v1.setVehicleDetais( 1 , "Toyota" , "SUV", 85000000);
  v2.setVehicleDetais( 2 , "Nissan" , "Saloon" , 60000000);
  v3.setVehicleDetais( 1 , "Honda"  , "Convertible", 72000000);

  //Call new price
  v1.setVehiclePrice( 1 );
  v2.setVehiclePrice( 2 );
  v3.setVehiclePrice( 3 );

  //display output
  
  cout << endl;
  v1.displayVehicleDetails();
  cout << endl;
  v2.displayVehicleDetails();
  cout << endl;
  v3.displayVehicleDetails();

  return 0 ;
  
}