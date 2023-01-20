#include "Child.h"
#include <iostream>
#include <string.h>
using namespace std;

//Methods implementation

void Child::setChildDetails( int pID , const char child[] , const char age[] , const char parent[] , const char num[] )
{
    childID = pID ;
    strcpy (childName , child );
    strcpy (ageGrOUP , age ) ;
    strcpy (parentName , parent );
    strcpy ( contactNo , num );
    
}
void Child::displayChildDetails()
{
   cout << "Child Name     =  " << childName << endl;
   cout << "Parent Name    =  " << parentName << endl;
   cout << "Contact Number =  " << contactNo << endl ;

}
void Child::setContactNo()
{
    cout << "Input new Contact Number for chlid " << childID << " : "  ;
    cin >> contactNo ;
   
}