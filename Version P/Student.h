//Class declaration

class Student {

  private :
    
    int studentID;
    char studentName[30];
    double marksOOC;
    double marksSPM;
    double marksISDM;

  public :

    void setStudentDetails( int pID , const char pname[] , double OOC , double SPM , double ISDM );
    int getStudentID();
    double getMarksOOC();
    double getMarksSPM();
    double getMarksISDM();
    
};