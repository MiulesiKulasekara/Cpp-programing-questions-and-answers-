#include "Course.h"
#include <iostream>
#include <string.h>
using namespace std ;

//Metods implimentation

void Course::setcourseDetails( int pID , const char pname[] , int pcredit )
{
   courseID = pID;
   strcpy ( courseName , pname );
   creditPoints = pcredit;
}
void Course::displayCourseDetails()
{
   cout << "Course ID    = " <<  courseID << endl;
   cout << "Course Name  = " <<  courseName << endl;
   cout << "CreditPoints = " <<  creditPoints << endl; 
}
void Course::setCreditPoints( )
{
    cout << "Input new " << courseName << " credit points :" ;
    cin >> creditPoints ;

}
    