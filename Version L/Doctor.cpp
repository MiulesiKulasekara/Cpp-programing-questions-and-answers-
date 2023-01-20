#include "Doctor.h"
#include <iostream>
#include <string.h>
using namespace std;

//Methods implementation

void Doctor::setDoctorDetails( int pID , const char pname[] , const char pspecialization[] , const char phospital[] )
{
   doctorID = pID;
   strcpy ( doctorName , pname );
   strcpy ( specialization , pspecialization );
   strcpy ( hospital , phospital );

}
void Doctor::displayDoctorDetails()
{
  cout << "Doctor ID       = " << doctorID << endl ;
  cout << "Doctor Name     = " << doctorName << endl ;
  cout << "specialization  = " << specialization << endl ;
  cout << "Hospital        = " << hospital << endl ;
}
void Doctor::sethospital(  )
{
   cout << "Input new hospital of doctor " << doctorID << " : " ;
   cin >> hospital ;
}


