#include "Guest.h"
#include <iostream>
#include <string.h>
using namespace std ;

//class implementation

void Guest::setGuestDetails( int pID , const char pname[] , double prate , int pdays )
{
    guestID = pID;
    strcpy ( guestName , pname );
    ratePerDay = prate ;
    numberOfDays = pdays;

}
void Guest::displayGuestDetaild()
{ 
     cout << "Guest ID = " << guestID << endl ;
     cout << "Guest Name = " << guestName << endl;
     cout << "Bill Amount = " << calculateGuestBill() << endl ;
}
double Guest::calculateGuestBill()
{
     return ratePerDay * numberOfDays;
}
