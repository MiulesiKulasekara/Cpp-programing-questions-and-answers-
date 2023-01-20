#include "Plane.h"
#include <iostream>
#include <string> 
using namespace std ;

int main ( ){

  //create objects
	Plane p1 , p2 , p3 , p4 ;
	
  //set plane details
	p1.setPlaneDetails( 1 , "Jhon" , "USA" );
	p2.setPlaneDetails( 2 , "George" , "UK" );
	p3.setPlaneDetails( 3 , "Henry" , "USA" );
	p4.setPlaneDetails( 4 , "Renald" , "USE" );
	
  //get new pioiet names
  p1.getPiolet();
  p2.getPiolet();
  p3.getPiolet();
  p4.getPiolet();
	
  //display output
  cout << endl ;
  p4.displayPlaneDetails();
  cout << endl ;
  p2.displayPlaneDetails();
  cout << endl ;
  p3.displayPlaneDetails();
  cout << endl ;
  p4.displayPlaneDetails();	
	
	return 0 ;
}