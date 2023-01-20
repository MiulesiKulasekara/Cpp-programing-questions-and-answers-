#include "Course.h"
#include <iostream>
#include <string.h>
using namespace std ;

int main() {
  
  Course c1 , c2 , c3 , c4 ;
  
  //Set course details
  c1.setcourseDetails( 1050 , "OOC" , 2 );
  c2.setcourseDetails( 1060 , "SPM" , 3 );
  c3.setcourseDetails( 1100 , "IWT" , 4 );
  c4.setcourseDetails( 1090 , "ISDM" , 4 );
  
  //Call methods
  c1.setCreditPoints(  );
  c2.setCreditPoints(  );
  c3.setCreditPoints(  );
  c4.setCreditPoints(  );
  
  //display output
  cout << endl;
  c1.displayCourseDetails();
  cout << endl;
  c2.displayCourseDetails();
  cout << endl;
  c3.displayCourseDetails();
  cout << endl;
  c4.displayCourseDetails();

  return 0 ;

  
}