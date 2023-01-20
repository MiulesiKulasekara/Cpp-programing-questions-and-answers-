#include "Student.h"
#include <iostream>
#include <string.h>

//methods implementation
    void Student::studentDetails( int pID , const char pname[])
    {
      studentID = pID ;
      strcpy (StudentName , pname );

    }
    void Student::setMarksOOC( double ooc )
    {
       marksOOC = ooc ;
    } 
    double Student::getMarksOOC()
    {
       return marksOOC ;
    } 
    void Student::setMarksSPM( double spm )
    {
       marksSPM = spm ;
    } 
    double Student::getMarksSPM()
    {
       return marksSPM ;
    } 
    void Student::setMarksISDM( double isdm )
    {
       marksISDM = isdm ;
    }
    double Student::getMarksISDM()
    {
        return marksISDM ;
    }