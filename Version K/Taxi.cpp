#include "Taxi.h"
#include <iostream>
#include<string.h>
using namespace std ;

//Methods implementation

void Taxi::setTaxiDetails( int pID , const char pdriver[] , double prate , double pdis )
{
    taxiID = pID ;
    strcpy ( driver , pdriver );
    ratePerKM = prate ;
    distanceTravelled =  pdis;
}
void Taxi::displayTaxiDetails()
{  
    cout << "Taxi ID      =  " << taxiID << endl ;
    cout << "Driver Name  =  " << driver << endl ;
    cout << "Bill Amount  =  " << calculateBill() << endl ;
}
double Taxi::calculateBill()
{
   return ( ratePerKM * distanceTravelled );
}