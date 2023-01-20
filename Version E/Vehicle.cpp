#include "Vehicle.h"
#include <iostream>
#include <string.h>
using namespace std ;

//method implimentation

void Vehicle::setVehicleDetais( int pID , const char pbrand[] , const char ptype[] , int vehiclePrice )
{
   vehicleID = pID;
   strcpy ( vehicleBrand , pbrand );
   strcpy ( vehicleType , ptype );
}
void Vehicle::displayVehicleDetails()
{
    cout << "Vehicle ID    = "<< vehicleID << endl;
    cout << "Vehicle Brand = "<< vehicleBrand << endl;
    cout << "Vehicle Type  = "<< vehicleType << endl;
    cout << "Vehicle price = "<< vehiclePrice <<
    endl;
}
void Vehicle::setVehiclePrice( int n )
{
     cout << "Input new priceof vehicle " << n << " = " ;
     cin >> vehiclePrice ;
  
}
