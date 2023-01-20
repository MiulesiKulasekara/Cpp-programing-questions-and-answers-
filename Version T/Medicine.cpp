#include "Medicine.h"
#include <iostream>
#include <string.h>
using namespace std;

//method implementation

void Medicine::setMedicineDetails( int pID , const char pmedicineName[] , const char psickness[] , double pdose )
{
    medicineID = pID ;
    strcpy ( sickness , psickness );
    strcpy ( medicineName , pmedicineName );
    dose = pdose ;
}
void Medicine::displayMedicineDetails()
{
    cout << "medicine ID    =  " << medicineID << endl;
    cout << "medicine Name  =  " << medicineName << endl ;
    cout << "Sickness       =  " << sickness <<endl ;
    cout << "Dose           =  " << dose <<endl ;
}
void Medicine::setDose()
{
   cout << "Input new dose of medicine " << medicineID << " : " ;
   cin >> dose ;
}