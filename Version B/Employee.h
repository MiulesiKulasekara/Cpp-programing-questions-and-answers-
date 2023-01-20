//Class declaration
class Employee{

  private :

     int employeeID ;
     char employeename[30] ;
     double OTHours ;
     double OTRate ;

    public :

     void setEmployeeDetails( int pID , const char pname[] ) ;
     void displayEmployeeDetails();
     void setOTHours( double pOT ) ;
     void setOTRate( double pRate );
     double calculateOTPayment();

};