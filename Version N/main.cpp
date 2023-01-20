#include "Train.h"
#include <iostream>
#include <string.h>
using namespace std;

int main(){

  //Create objects
  Train t1 , t2 , t3 ;
  
  //Set valuse Trains
  t1.setTrainDetails( 1 , 200 , "6.00AM" , "Kandy" );
  t2.setTrainDetails( 2 , 150 , "7.30AM" , "Gall" );
  t3.setTrainDetails( 3 , 300 , "4.00AM" , "Jaffna" );

  //Set Sart time
  t1.setStarttime(  );
  t2.setStarttime(  );
  t3.setStarttime(  );
  
  //Display output
  cout << endl ;
  t1.displayTrainDetails();
  cout << endl ;
  t2.displayTrainDetails();
  cout << endl ;
  t3.displayTrainDetails();
  
  return 0 ;
}