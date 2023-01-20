#include "Student.h"
#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;

int main() {
  
  //variables
  double avg1 , avg2 , avg3 , tot1 , tot2 , tot3;
  //cretate objects
  Student s1 , s2 , s3 ;
  
  //Set student details
  s1.setStudentDetails( 1234 , "Kylie" , 75 , 80 , 60 );
  s2.setStudentDetails( 4321 , "James" , 65 , 70 , 85 );
  s3.setStudentDetails( 6543 , "Kyson" , 90 , 85 , 80 );

  //calculate total
  tot1 = (s1.getMarksOOC() + s1.getMarksSPM() + s1.getMarksISDM());
  tot2 = (s2.getMarksOOC() + s2.getMarksSPM() + s2.getMarksISDM());
  tot3 = (s3.getMarksOOC() + s3.getMarksSPM() + s3.getMarksISDM());


  //calculate average 
  avg1 = (s1.getMarksOOC() + s1.getMarksSPM() + s1.getMarksISDM()) / 3.0 ;
  avg2 = (s2.getMarksOOC() + s2.getMarksSPM() + s2.getMarksISDM()) / 3.0 ;
  avg3 = (s3.getMarksOOC() + s3.getMarksSPM() + s3.getMarksISDM()) / 3.0 ;

  //Display output

  //s1
  cout << "StudentID     = " << s1.getStudentID() << endl ;
  cout << "Student Name  = Kylie" << endl ;
  cout << "Marks OOC     = " << s1.getMarksOOC() << endl ;
  cout << "Marks SPM     = " << s1.getMarksSPM() << endl ;
  cout << "Marks ISDM    = " << s1.getMarksISDM() << endl ;
  cout << "Total Marks = "  << setiosflags(ios::fixed) << setprecision(2) << tot1 << endl ;
  cout << "Average Marks = "  << setiosflags(ios::fixed) << setprecision(2) << avg1 << endl ;
  cout << endl;
  
  //s2
  cout << "StudentID     = " << s2.getStudentID() << endl ;
  cout << "Student Name  = James" << endl ;
  cout << "Marks OOC     = " << s2.getMarksOOC() << endl ;
  cout << "Marks SPM     = " << s2.getMarksSPM() << endl ;
  cout << "Marks ISDM    = " << s2.getMarksISDM() << endl ;
  cout << "Total Marks = "  << setiosflags(ios::fixed) << setprecision(2) << tot2 << endl ;
  cout << "Average Marks = " << setiosflags(ios::fixed) << setprecision(2) << avg2 << endl ;
  cout << endl;
  
  //s3
  cout << "StudentID     = " << s3.getStudentID() << endl ;
  cout << "Student Name  = Kyson" << endl ;
  cout << "Marks OOC     = " << s3.getMarksOOC() << endl ;
  cout << "Marks SPM     = " << s3.getMarksSPM() << endl ;
  cout << "Marks ISDM    = " << s3.getMarksISDM() << endl ;
  cout << "Total Marks = "  << setiosflags(ios::fixed) << setprecision(2) << tot3 << endl ;
  cout << "Average Marks = "  << setiosflags(ios::fixed) << setprecision(2) << avg3 << endl ;
  cout << endl;

  return 0 ;
}