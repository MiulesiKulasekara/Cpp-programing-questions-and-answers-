//Class declaration
class Course{

  private :
    
    int courseID;
    char courseName[30];
    int creditPoints;

  public :

    void setcourseDetails( int pID , const char pname[] , int pcredit );
    void displayCourseDetails();
    void setCreditPoints( );
    
};
