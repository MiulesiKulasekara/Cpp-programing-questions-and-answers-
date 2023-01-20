//Class declaration

class Child {

  private :

     int childID;
     char childName[30];
     char parentName[30];
     char ageGrOUP[30];
     char contactNo[10];

  public :

     void setChildDetails( int pID , const char child[] , const char age[] , const char parent[] , const char num[] );
     void displayChildDetails();
     void setContactNo();

};