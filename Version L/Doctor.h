//class declaration
class Doctor{

  private :
    
    int doctorID;
    char doctorName[30];
    char specialization[30];
    char hospital[30];

  public:

    void setDoctorDetails( int pID , const char pname[] , const char pspecialization[] , const char phospital[] );
    void displayDoctorDetails();
    void sethospital(  );


};