#include "Lecturer.h"
#include <iostream>
#include <string.h>
using namespace std ;

//Methods implementation

void Lecturer::setLecturerDetails( const char pname[] , const char psub[] , const char pday[] )
{
    strcpy ( lecturerName , pname );
    strcpy ( subject , psub );
    strcpy (  availableDay, pday );
}
void Lecturer::displayLecturerDetais()
{
   cout << "Lecturer Name = " << lecturerName << endl ;
   cout << "Subject       = " << subject << endl ;
   cout << "Available Day = " << availableDay << endl ;
}
void Lecturer::setAvailableDay()
{
    cout << "Input new available day of " << lecturerName << " : " ;
    cin >> availableDay ; 
}