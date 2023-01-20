#include "Lecturer.h"
#include <iostream>
#include <string.h>
using namespace std ;

int main() {
  
  //Create objects
  Lecturer l1 , l2 , l3 ;
  
  //set lecturer details
  l1.setLecturerDetails("Ms.Shalini" , "OOC" , "Tue day" );
  l2.setLecturerDetails("Ms.Loshini" , "IWT" , "Wednes day" );
  l3.setLecturerDetails("Ms.Lokeshai" , "OOC" , "Thurs day" );

  //Set available days
  l1.setAvailableDay();
  l2.setAvailableDay();
  l3.setAvailableDay();
  
  //Display output
  cout << endl ;
  l1.displayLecturerDetais();
  cout << endl ;
  l2.displayLecturerDetais();
  cout << endl ;
  l3.displayLecturerDetais();
  
  return 0 ;
}