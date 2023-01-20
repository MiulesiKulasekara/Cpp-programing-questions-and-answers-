#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

//Methods implementation

void Student::setStudentDetails( int pID , const char pname[] , double OOC , double SPM , double ISDM )
{
    studentID = pID ;
    strcpy ( studentName , pname );
    marksOOC = OOC;
    marksSPM = SPM;
    marksISDM = ISDM;
}
int Student::getStudentID()
{
   return studentID ;
}
double Student::getMarksOOC()
{
  return marksOOC ;
}
double Student::getMarksSPM()
{
   return marksSPM ;
}
double Student::getMarksISDM()
{
   return marksISDM;
}