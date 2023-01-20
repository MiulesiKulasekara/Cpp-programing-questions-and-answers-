#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std ;

int main() {

  double avgOOC ;
  double avgSPM ;
  double avgISDM ;
  
  Student s1 , s2 , s3 , s4 ;

    s1.studentDetails(1234 , "  Kamal ");
    s1.setMarksOOC( 85 ); 
    s1.setMarksSPM( 80 ); 
    s1.setMarksISDM( 75 ); 

    s2.studentDetails(4567 , " Saman ");
    s2.setMarksOOC( 65 ); 
    s2.setMarksSPM( 50 ); 
    s2.setMarksISDM( 45 ); 

    s3.studentDetails(1234 , " Nimal ");
    s3.setMarksOOC( 98 ); 
    s3.setMarksSPM( 75 ); 
    s3.setMarksISDM( 80 ); 
   
    s4.studentDetails(1234 , "  Sunil ");
    s4.setMarksOOC( 35 ); 
    s4.setMarksSPM( 60 ); 
    s4.setMarksISDM( 40 ); 

    avgOOC = ( s1.getMarksOOC() + s2.getMarksOOC() + s3.getMarksOOC() + s4.getMarksOOC() ) / 4 ;

    avgSPM = ( s1.getMarksSPM() + s2.getMarksSPM() + s3.getMarksSPM() + s4.getMarksSPM() ) / 4 ;

    avgISDM = ( s1.getMarksISDM() + s2.getMarksISDM() + s3.getMarksISDM() + s4.getMarksISDM() ) / 4 ;

    cout << "Average OOC Marks  : " << avgOOC << endl ;
    cout << "Average SPM Marks  : " << avgSPM << endl ;
    cout << "Average ISDM Marks : " << avgISDM << endl ;

    return 0 ;
} 