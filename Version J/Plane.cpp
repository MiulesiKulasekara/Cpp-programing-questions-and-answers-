#include "Plane.h"
#include <iostream>
#include <string.h> 
using namespace std ;

//Methods implementation
void Plane::setPlaneDetails( int pID , const char pio[] , const char pdestination[] )
{
	planeID = pID ; ;
	strcpy (piolet , pio );
	strcpy ( destination , pdestination ) ;
}
void Plane::displayPlaneDetails()
{
	cout << "Plane id     = " << planeID << endl ;
	cout << "Piolet       = " << piolet << endl ;
	cout << "Destination  = " << destination <<  endl ;
}
void Plane::getPiolet()
{
	cout << "Input new pilote of plane " << planeID << " : " ;
	cin >> piolet ;
}