//Class declaration

class Train {
  
  private :
    
    int trainID;
    int capacity;
    char startTime[30];
    char destination[30] ;


  public :

    void setTrainDetails( int pID , int pcapacity , const char ptime[] , const char pdestination[] );
    void displayTrainDetails();
    void setStarttime( );
};