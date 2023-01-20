//Student class
class Student {
  
  private :
    
    int studentID ;
    char StudentName[30];
    double marksOOC;
    double marksSPM;
    double marksISDM;

  public :

    void studentDetails(int pID , const char pname[] );
    void setMarksOOC( double ooc ); 
    double getMarksOOC(); 
    void setMarksSPM( double spm ); 
    double getMarksSPM(); 
    void setMarksISDM( double isdm ); 
    double getMarksISDM(); 



};